#pragma once
#include "headInclude.h"
#include "drawModel.h"
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <IDGenerator.h>
class object{
    public:
        int ID;
        bool isShow=true;
        object(){
            
            ID =  IDGenerator::getInstance().generateUniqueID();
        }
        virtual void Init()=0;
        virtual void Use(Camera camera,int SCR_WIDTH,int SCR_HEIGHT,glm::mat4 trans=glm::mat4(1.0f),std::vector<Material> material={Materials::emerald,Materials::gold})=0;
        virtual void UnUse()=0;
        

};