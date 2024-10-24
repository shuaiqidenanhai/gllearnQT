#pragma once
#include "headInclude.h"
#include "drawModel.h"
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include<vector>

class drawGear:public drawModel {
public:
    float Pr;       
    float module;
    float pressAngle;
    int numTeeth;
    Shader shader;

    drawGear(float m, int N, float pressAngle, float width, float Cr,glm::vec3 startPosition);

    ~drawGear() { printf("Gear is destoryed\n!");}

    //初始化齿轮，模型顶点法向量，buffer，数据是存到VAO里的而不是Shader,Shader和VAO连接必须要看哪个Shader处于use中
    void Init(){
        this->drawSpurGear();
        this->setupBuffers();
    }
    void Use(Camera camera,int SCR_WIDTH,int SCR_HEIGHT,glm::mat4 trans=glm::mat4(1.0f),std::vector<Material> material={Materials::emerald,Materials::gold}) override{
        this->shader.use();
     
        this->setShader(camera,material[0]);
        
        // float currentAngle = rotationAngle * (20 / (float)this->numTeeth);
        // trans = glm::rotate(trans, glm::radians((-currentAngle)), glm::vec3(0.0f, 0.0f, 1.0f));
        // this->setTran(selectedModelPosition,rotationAngle);

        //trans可以是任意复杂变换后的效果
        this->setShaderTran(trans,camera,SCR_WIDTH,SCR_HEIGHT);
        this->renderModel();
        }
    void UnUse(){
        this->shader.unuse();
    }




    void showGearArg() {
        printf("module:%f\n", module);
        printf("pressAngle:%f\n", pressAngle);
    }

    void setShader(Camera camera,Material material);
    void setShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT);
    // void setTran(glm::mat4 trans,glm::vec3 xx,float rotationAngle);
    void printNormals() {
        std::cout << "Normals data:\n";
        // 使用解引用运算符访问 vector
        for (const auto& normal : *normals) { 
            std::cout << "Vertex: (" << normal.x << ", " << normal.y << ", " << normal.z << ")\n";
        }
    }

    void renderModel(){
        glBindVertexArray(this->VAO);
        glDrawArrays(GL_TRIANGLES, 0, this->vertices->size());
        glBindVertexArray(0);  // 解绑 VAO
    }
private:
    
    float p;                            
    float gearThickness;                  
    float Pd;                               
                        
    float Ar;                             
    float Dr;                     
    float Br;                
    
    float Cr;
    float z;
    float h;


    void drawRing();
    void drawRoot();
    void drawHorn();
    void drawSpurGear();

};