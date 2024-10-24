#pragma once
#include "headInclude.h"
#include "drawModel.h"
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


class drawTransimisssion:public drawModel {
public:

    Shader shader;

    drawTransimisssion(float radius, float floor,float top,glm::vec3 startPosition);
    ~drawTransimisssion() {printf("Transi is destoryed!\n");}
    void Init(){
        this->drawSuperTransi();
        this->setIndiceBuffer();
    }
    void  Use(Camera camera,int SCR_WIDTH,int SCR_HEIGHT,glm::mat4 trans=glm::mat4(1.0f),std::vector<Material> material={Materials::emerald,Materials::gold}) override{
        this->shader.use();
        this->setShader(camera,material[0]);        
        this->setShaderTran(trans,camera,SCR_WIDTH,SCR_HEIGHT);
        this->renderTransi();
    }
    void UnUse(){
        this->shader.unuse();
    }
    
private:

    float radius;
    float floor;
    float top;
    void generateCylinder(int numSegments=36);
    void setShader(Camera camera,Material material);
    void setShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT);
    void renderTransi() ;
    void drawSuperTransi();
};