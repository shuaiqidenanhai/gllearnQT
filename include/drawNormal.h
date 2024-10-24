#ifndef DRAWNORMAL_H
#define DRAWNORMAL_H

#include "setting.h"
#include <QObject>
#include <QDebug>
#include <QOpenGLContext>
#include "Container.h"

// QT_BEGIN_NAMESPACE
// namespace Ui {
// class drawNormal;
// }
// QT_END_NAMESPACE
// 函数：禁用最大化按钮和调整大小图标

class drawNoraml: public QObject
{

public:
 
    bool deleteSignal=false;
    bool showSignal=false;
    bool getHideSiginal=false;
    bool getShowSiginal=true;
    int deleteID;
    int ID;
    
    // enmu{Gear,Bear,Transi};
    explicit drawNoraml();
        //: QWindow  (parent), window(nullptr)

    int renderloop();
    GLFWwindow* showGear()
    {
        return window;
    }

    ~drawNoraml();


    int CreateGear(float m, int N, float pressAngle, float width, float Cr,glm::vec3 startPosition,Material m1){
        IDContainer.push_back(CreateId = ModelContainer.push_back(std::move(std::make_unique<drawGear>( m,  N,  pressAngle,  width,  Cr,startPosition)),vector<Material>{m1}));
        return CreateId;
    }
    int CreateBear(float ballRadius, float Rdout,float Rdin, float RollOutWidth,float RollOutThick,float RollInWidth, float Rbore,glm::vec3 startPosition,Material m1 , Material m2 ){
        IDContainer.push_back(CreateId =ModelContainer.push_back(std::move(std::make_unique<drawBear>( ballRadius,  Rdout, Rdin,  RollOutWidth, RollOutThick, RollInWidth,  Rbore,startPosition)),vector<Material>{m1,m2}));
        return CreateId;
    }
    int CreateTranSi(float ballRadius, float Rdout,float Rdin, float RollOutWidth,float RollOutThick,float RollInWidth, float Rbore,glm::vec3 startPosition,Material m1 , Material m2 ){
        IDContainer.push_back(CreateId = ModelContainer.push_back(std::move(std::make_unique<drawTransimisssion>(20.f,-100.f,100.f,glm::vec3(0,0.,0.))),vector<Material>{Materials::emerald}));
        return CreateId;
    }
    int CreateGearGroup(float ballRadius, float Rdout,float Rdin, float RollOutWidth,float RollOutThick,float RollInWidth, float Rbore,glm::vec3 startPosition,Material m1 , Material m2 ){
        IDContainer.push_back(CreateId =ModelContainer.push_back(std::move(std::make_unique<drawBear>( ballRadius,  Rdout, Rdin,  RollOutWidth, RollOutThick, RollInWidth,  Rbore,startPosition)),vector<Material>{m1,m2}));
        return CreateId;
    }


    void deleteObj(int deleteID){
        IDContainer.erase(std::remove(IDContainer.begin(), IDContainer.end(), deleteID), IDContainer.end());
        ModelContainer.Delete(deleteID);
    }

    void getHideSiginal(int HideID){
            ModelContainer.setShowState(HideID,false);
    }
    void getShowSiginal(int ShowId)
    { 
        ModelContainer.setShowState(ShowId,true);
        
    }


private:
    float m;
    int N;
    float Angle;
    float width;
    float Cr;
    float sN;
    float sCr;
    GLFWwindow* window;
    GLFWwindow* initOpenGl();
    Container ModelContainer;                            //存储、使用模型类
    std::vector<int> IDContainer;    
    int CreateId;
};
#endif // MAINWINDOW_H
