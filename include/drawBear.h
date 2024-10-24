#pragma once
#include "headInclude.h"
#include "drawModel.h"
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


class drawBear:public drawModel {
public:
    unsigned int ballVAO, ballvboVertices, ballvboNormals,ballEBO;
    Shader shader;
    Shader ballshader;

    drawBear(float ballRadius, float Rdout,float Rdin, float RollOutWidth,float RollOutThick,float RollInWidth, float Rbore,glm::vec3 startPosition);
    ~drawBear(){printf("Bear is destoryed!\n");}
    void Init(){
        this->drawSpurBear();
        this->setballBuffer();
        this->setupBuffers();
        this->UnUse();
    }
    void Use(Camera camera,int SCR_WIDTH,int SCR_HEIGHT,glm::mat4 trans=glm::mat4(1.0f),std::vector<Material> material={Materials::emerald,Materials::gold}) override{

        this->shader.use();
        this->setShader(camera,material[0]);      
        this->setShaderTran(trans,camera,SCR_WIDTH,SCR_HEIGHT);
        this->renderRing();

        this->ballshader.use();
        this->setballShader(camera,material[1]);
        this->setballShaderTran(trans, camera, SCR_WIDTH, SCR_HEIGHT);
        this->renderBalls();  
    }

    void UnUse(){
        this->shader.unuse();
    }

    
    void printNormals() {
        std::cout << "Normals data:\n";
        // 使用解引用运算符访问 vector
        for (const auto& normal : *normals) { 
            std::cout << "Vertex: (" << normal.x << ", " << normal.y << ", " << normal.z << ")\n";
        }
    }
   
    

    
private:                         

    float ballRadius;           //滚轮半径
    float Rdout;                //外滚道半径
    float Rdin;                 //内滚道半径
    float Rdm;                  //滚轮中心平均半径
    float RollOutWidth;         //外滚道宽度
    float RollOutThick;         //外滚道厚度
    float RollInWidth;          //内滚道宽度
    float Rbore;                //轴承孔径(半径)
    int ballNum;
    std::vector<glm::vec3> *ballvertices = new std::vector<glm::vec3>;
    std::vector<int> *ballindices = new std::vector<int>();
    std::vector<glm::vec3> *ballnormals = new std::vector<glm::vec3>;
    
    void setballBuffer();
    void renderBalls();
    void renderRing();  
    void setballShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT);
    void setballShader(Camera camera,Material material);
    void setShader(Camera camera,Material material);
    void setShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT);
    void drawSpurBear();
    void drawRing(float outer,float inner,float width);
    void drawball();
    void drawball1();
    void calballsNormals();
    void drawballRing1();
    void drawballRing();
    void setStartPosition() {
            for (int i = 0; i < vertices->size(); ++i) {
                (*vertices)[i].x += startPosition.x;
                (*vertices)[i].y += startPosition.y;
                (*vertices)[i].z += startPosition.z;
            }
            for (int i = 0; i < ballvertices->size(); ++i) {
                (*ballvertices)[i].x += startPosition.x;
                (*ballvertices)[i].y += startPosition.y;
                (*ballvertices)[i].z += startPosition.z;
            }
        }
};