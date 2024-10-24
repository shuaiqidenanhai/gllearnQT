#include "setting.h"
#include "drawGear.h"
#include "drawBear.h"
#include "drawTransimisssion.h"
#include "Materials.h"
#include "model.h"
#include "line.h"
#include <queue>
#include <memory> 
#include "drawNormal.h"
GLFWwindow* initOpenGl();

GLFWwindow* drawNoraml::initOpenGl()
{

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPenmu{Gear,Bear,Transi}ENGL_FORWARD_COMPAT, GL_TRUE);
    #endif

    // glfw window creation
    // --------------------
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Render", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return nullptr;
    }
    glfwSetWindowPos(window, 480, 100);
    glfwSetWindowAttrib(window, GLFW_FLOATING, GLFW_TRUE);
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    glfwSetCursorPosCallback(window, mouse_callback); // 只设置一次
    glfwSetScrollCallback(window, scroll_callback);
    // glfwSetCursorPosCallback(window, mouse_callback);
    

    // tell GLFW to capture our mouse
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL); // 禁用鼠标隐藏

    
    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return nullptr;
    }

    // configure global opengl state
    // -----------------------------
    glEnable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glEnable(GL_STENCIL_TEST);
    return window;i
}


//注意设计模型时，int 200等于实际的1，因为模型类内部要除以scale==200，并且由于opengl窗口最大为1，所以尽量输入在200以内
int  drawNoraml::renderloop() {

    GLFWwindow* window = initOpenGl();
    if (!window) return -1;
    //注意标度 opengl的最大尺寸是1,1，这里参数：模型尺寸100:1

                       //存储模型ID的容器，ID是不可重复的int类型
    ModelContainer.SetSCR(SCR_WIDTH, SCR_HEIGHT);        //传入窗口参数

    glm::vec3 lampPos(0.5f, 1.0f, 1.5f);

    //需要从qt接收到的信号
   


    IDContainer.push_back(id = ModelContainer.push_back(std::move(std::make_unique<drawGear>(3.f, 50, 20.f * M_PI / 180.f,10.f,10.f,glm::vec3(0.5,0.,0.))),vector<Material>{Materials::emerald}));
    std::cout<<IDContainer[0]<<std::endl;
    ModelContainer.setShowState(0,false);
    ModelContainer.setShowState(0,true);

    IDContainer.push_back(id = ModelContainer.push_back(std::move(std::make_unique<drawBear>(10.f,90.f,70.f,22.f,10.f,11.f,50.f,glm::vec3(0,0.,0.))),vector<Material>{Materials::emerald,Materials::gold}));

    
    IDContainer.push_back(id = ModelContainer.push_back(std::move(std::make_unique<drawGear>(3.f, 50, 20.f * M_PI / 180.f,10.f,10.f,glm::vec3(-0.5,0.,0.))),vector<Material>{Materials::emerald}));
    deleteID=1;
    IDContainer.erase(std::remove(IDContainer.begin(), IDContainer.end(), deleteID), IDContainer.end());
    ModelContainer.Delete(deleteID);
    // -----------
    while (!glfwWindowShouldClose(window))
    {
        
             
        if(getHideSiginal){
            ModelContainer.setShowState(ID,false);

        }
        if(getShowSiginal){ IDContainer.push_back(id = ModelContainer.push_back(std::move(std::make_unique<drawGear>(3.f, 50, 20.f * M_PI / 180.f,10.f,10.f,glm::vec3(-0.5,0.,0.))),vector<Material>{Materials::emerald}));
        }


        
        

        // per-frame time logic
        // --------------------
        float currentFrame = static_cast<float>(glfwGetTime());
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;
        
                // 更新旋转角度
        if (isRotating) {
            if (rotatingClockwise) {
                rotationAngle += rotationSpeed * deltaTime; // 正向旋转
            } else {ModelContainer
                rotationAngle -= rotationSpeed * deltaTime; // 反向旋转
            }
            // 确保角度在 0 到 360 度之间
            if (rotationAngle >= 360.0f) {
                rotationAngle -= 360.0f;
            }
        }
        float currentFrameTime = glfwGetTime();
        float deltaTime = currentFrameTime - lastFrame;
        lastFrame = currentFrameTime;
        // input
        // -----
        processInput(window);

        // render
        // ------
        glClearColor(150., 150., 150., 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT| GL_STENCIL_BUFFER_BIT);
        glDisable(GL_BLEND);bool getCreateSignal=false;
    bool getdeleteSignal=false;
    bool showSignal=false;
    bool getHideSiginal=false;
    bool getShowSiginal=true;
    int i;
    int deleteID;
    int ID;



        //use应该在初始化窗口滞后,渲染模型
        std::for_each(IDContainer.begin(),IDContainer.end(),[&](int element){
            ModelContainer.Use(element,camera);
        });



    
        glfwSwapBuffers(window);
        glfwPollEvents();
        glfwGetWindowSize(window, &SCR_WIDTH, &SCR_HEIGHT);
        adjustAspectRatio(window, SCR_WIDTH, SCR_HEIGHT);
    }
    // optional: de-allocate all resources once they've outlived their purpose:
    // ------------------------------------------------------------------------
   
    glfwTerminate();
    return 0;
}
