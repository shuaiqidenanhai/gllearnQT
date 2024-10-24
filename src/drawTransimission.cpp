#include"drawTransimisssion.h"

static const float PI = 3.14159265358979f;
drawTransimisssion::drawTransimisssion(float radius, float floor,float top,glm::vec3 startPosition):drawModel(startPosition),shader("/home/siwan/testgl/gllearn/src/draw.vs", "/home/siwan/testgl/gllearn/src/draw.fs")
{
    this->radius=radius;
    this->floor=floor;
    this->top = top;
    
}


void drawTransimisssion::generateCylinder(int numSegments) {

    vertices->clear();
    normals->clear();
    indices->clear();
    float& radius1=this->radius;
    float& h1 = this->floor;
    float& h2 = this->top;
    radius1/=scale;
    h1/=scale;
    h2/=scale;
    // 1. 底面
    int baseCenterIndex = vertices->size();
    vertices->push_back(glm::vec3(0.0f, 0.0f, h1)); // 底面中心
    normals->push_back(glm::vec3(0.0f, 0.0f, -1.0f)); // 底面的法向量

    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * PI * float(i) / float(numSegments);
        float x = radius1 * cos(theta);
        float y = radius1 * sin(theta);
        vertices->push_back(glm::vec3(x, y, h1)); // 底面上的顶点
        normals->push_back(glm::vec3(0.0f, 0.0f, -1.0f)); // 底面的法向量
    }

    // 索引
    for (int i = 1; i <= numSegments; ++i) {
        indices->push_back(baseCenterIndex); // 中心顶点
        indices->push_back(baseCenterIndex + i);
        indices->push_back(baseCenterIndex + (i % numSegments) + 1);
    }

    // 2. 顶面
    int topCenterIndex = vertices->size();
    vertices->push_back(glm::vec3(0.0f, 0.0f, h2)); // 顶面中心
    normals->push_back(glm::vec3(0.0f, 0.0f, 1.0f)); // 顶面的法向量

    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * PI * float(i) / float(numSegments);
        float x = radius1 * cos(theta);
        float y = radius1 * sin(theta);
        vertices->push_back(glm::vec3(x, y, h2)); // 顶面上的顶点
        normals->push_back(glm::vec3(0.0f, 0.0f, 1.0f)); // 顶面的法向量
    }

    // 索引
    for (int i = 1; i <= numSegments; ++i) {
        indices->push_back(topCenterIndex); // 顶面的中心点
        indices->push_back(topCenterIndex + (i % numSegments) + 1);
        indices->push_back(topCenterIndex + i);
    }

    // 3. 侧面
    int sideStartIndex = vertices->size();
    for (int i = 0; i <= numSegments; ++i) {
        float theta = 2.0f * PI * float(i) / float(numSegments);
        float x = radius1 * cos(theta);
        float y = radius1 * sin(theta);

        // 侧面顶点，底部和顶部
        vertices->push_back(glm::vec3(x, y, h1)); // 底部顶点
        normals->push_back(glm::vec3(x, y, 0.0f)); // 侧面的法向量
        vertices->push_back(glm::vec3(x, y, h2)); // 顶部顶点
        normals->push_back(glm::vec3(x, y, 0.0f)); // 侧面的法向量
    }

    // 索引
    for (int i = 0; i < numSegments; ++i) {
        int first = sideStartIndex + i * 2;
        int second = first + 1;
        int third = sideStartIndex + (i + 1) * 2;
        int fourth = third + 1;

        // 第一个三角形
        indices->push_back(first);
        indices->push_back(third);
        indices->push_back(second);

        // 第二个三角形
        indices->push_back(second);
        indices->push_back(third);
        indices->push_back(fourth);
    }
}

void drawTransimisssion::setShader(Camera camera,Material material){
    shader.setLight(glm::vec3(1.f,1.f,1.f),camera);
    shader.setMaterial(material);
}

void drawTransimisssion::setShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT){
    shader.setTransform(trans,camera,SCR_WIDTH,SCR_HEIGHT); 
}

void drawTransimisssion::renderTransi() {
    glBindVertexArray(VAO);
    glDrawElements(GL_TRIANGLES, indices->size(), GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}
void drawTransimisssion::drawSuperTransi(){
    generateCylinder();
    setStartPosition();
}

