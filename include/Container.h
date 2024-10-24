#pragma once 
#include <vector>
#include <memory> 
#include <object.h>

class Container{
    public:
    
    std::map<int, std::unique_ptr<object>> objectMap;

    void Use(int id, Camera camera, glm::mat4 trans = glm::mat4(1.0f)) {
        // 确保 id 在 objectMap 中存在
        auto it = objectMap.find(id);
        if (it != objectMap.end() && it->second != nullptr) {
            // std::cout<<"object ID"<<id<<it->second->isShow<<"!"<<std::endl;
            
            if(it->second->isShow){
                it->second->Use(camera, SCR_WIDTH, SCR_HEIGHT, trans, material[id]);
            }
        } else {
            // 处理未找到的情况，可以选择抛出异常或打印警告
            std::cerr << "Object with ID " << id << " not found or is null." << std::endl;
        }
    }
    
    
    int push_back(std::unique_ptr<object> p,std::vector<Material> m){
        int id =p->ID;
        if (id < 0) {   
            throw std::out_of_range("ID must be non-negative");
        }
        objectMap[id]=std::move(p);
        // v[id]=std::move(p);
        material[id]=m;
        objectMap[id]->Init();
        // v[id]->Init();
        return id;
        
    }



    void SetSCR(int WIDTH,  int HEIGHT){
        SCR_WIDTH = WIDTH;
        SCR_HEIGHT = HEIGHT;
    }

    void Delete(int ID) {
    auto it = objectMap.find(ID);
        if (it != objectMap.end()) {
            objectMap.erase(it);  // 找到时删除
        } else {
            std::cerr << "Object with ID " << ID << " not found in objectMap." << std::endl;  // 找不到时输出警告
        }

        auto it1 = material.find(ID);
        if (it1 != material.end()) {
            material.erase(it1);  // 找到时删除
        } else {
            std::cerr << "Material with ID " << ID << " not found in material." << std::endl;  // 找不到时输出警告
        }
    }
    void setShowState(int ID,bool visibility){
        auto it = objectMap.find(ID);
        if (it != objectMap.end() && it->second != nullptr) {
            it->second->isShow = visibility;  // 设置 isShow 属性
                std::cout<<"object ID"<<ID<<it->second->isShow<<"!"<<std::endl;
            
        } else {
            // 处理未找到的情况
            std::cerr << "Object with ID " << ID << " not found or is null." << std::endl;
        }
    }

private:
    std::map<int,std::vector<Material>> material;
    int SCR_WIDTH;
    int SCR_HEIGHT;
};