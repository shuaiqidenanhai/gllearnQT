#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <glm/glm.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include"Materials.h"
#include "camera.h"

class Shader
{
public:
    unsigned int ID;
    
    // constructor generates the shader on the fly
    // ------------------------------------------------------------------------


    /**
     * @brief Construct a new Shader object
     * 
     * @param vertexPath 顶点着色器代码地址
     * @param fragmentPath 片段着色器代码地址
     */
    Shader(){}

    Shader(const char* vertexPath, const char* fragmentPath)
    {
        // 1. retrieve the vertex/fragment source code from filePath
        std::string vertexCode;
        std::string fragmentCode;
        std::ifstream vShaderFile;
        std::ifstream fShaderFile;
        // ensure ifstream objects can throw exceptions:
        vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        try
        {
            // open files
            vShaderFile.open(vertexPath);
            fShaderFile.open(fragmentPath);
            std::stringstream vShaderStream, fShaderStream;
            // read file's buffer contents into streams
            vShaderStream << vShaderFile.rdbuf();
            fShaderStream << fShaderFile.rdbuf();
            // close file handlers
            vShaderFile.close();
            fShaderFile.close();
            // convert stream into string
            vertexCode = vShaderStream.str();
            fragmentCode = fShaderStream.str();
        }
        catch (std::ifstream::failure& e)
        {
            std::cout << "ERROR::SHADER::FILE_NOT_SUCCESSFULLY_READ: " << e.what() << std::endl;
        }
        const char* vShaderCode = vertexCode.c_str();
        const char* fShaderCode = fragmentCode.c_str();
        // 2. compile shaders
        unsigned int vertex, fragment;
        // vertex shader
        vertex = glCreateShader(GL_VERTEX_SHADER);
        glShaderSource(vertex, 1, &vShaderCode, NULL);
        glCompileShader(vertex);
        checkCompileErrors(vertex, "VERTEX");
        // fragment Shader
        fragment = glCreateShader(GL_FRAGMENT_SHADER);
        glShaderSource(fragment, 1, &fShaderCode, NULL);
        glCompileShader(fragment);
        checkCompileErrors(fragment, "FRAGMENT");
        // shader Program
        ID = glCreateProgram();
        glAttachShader(ID, vertex);
        glAttachShader(ID, fragment);
        glLinkProgram(ID);
        checkCompileErrors(ID, "PROGRAM");
        // delete the shaders as they're linked into our program now and no longer necessary
        glDeleteShader(vertex);
        glDeleteShader(fragment);    

    }
    // activate the shader
    // ------------------------------------------------------------------------
    /**
     * @brief 激活着色器程序
     * 
     */
    

    void use() const
    {
        glUseProgram(ID);
    }
    void unuse() const{
        glUseProgram(0);
    }

    //设置着色器物体的材质传入一个Materials类的成员变量
    void setMaterial(Material material)
    {
        setVec3("material.ambient", material.Ambient);
        setVec3("material.diffuse", material.Diffuse);
        setVec3("material.specular", material.Specular); // specular lighting doesn't have full effect on this object's material
        setFloat("material.shininess", material.Shininess*128.f);
    }

    //设置 光照参数   灯光颜色和位置，灯光位置等于相机位置
    /*光源位置 (light.position)：设置为摄像机的位置 camera.Position，通常用在类似手电筒的光照模型中，光源跟随摄像机的位置变化。
    视点位置 (viewPos)：将摄像机的位置传递给着色器，用于镜面反射光计算。
    环境光颜色 (light.ambient)：光照环境光的强度，通常较低，设置为光照颜色的 20%。
    漫反射颜色 (light.diffuse)：漫反射强度，通常设置为光照颜色的 50%。
    镜面反射颜色 (light.specular)：设置为白色光的镜面反射，影响光的高光部分。
    光源衰减 (light.constant, light.linear, light.quadratic)：这些参数用于控制光源随距离的衰减。典型的常数、线性、二次衰减系数分别为 1.0, 0.09 和 0.032，可以根据光源类型调整这些值。*/
    void setLight(glm::vec3 lightColor,Camera camera)
    {
        setVec3("light.position", camera.Position);
        setVec3("viewPos", camera.Position);
        glm::vec3 diffuseColor = lightColor * glm::vec3(0.5f); // decrease the influence
        glm::vec3 ambientColor = diffuseColor * glm::vec3(0.2f); // low influence
        setVec3("light.ambient", ambientColor);
        setVec3("light.diffuse", diffuseColor);
        setVec3("light.specular", 1.0f, 1.0f, 1.0f);
        setFloat("light.constant", 1.0f);
        setFloat("light.linear", 0.09f);
        setFloat("light.quadratic", 0.032f);
    }


    //设置变换矩阵
    /*作用: 该函数用于设置模型、视图和投影矩阵，控制物体在三维空间中的位置、缩放和视角效果。
    投影矩阵 (projection)：使用透视投影，利用摄像机的视场角（camera.Zoom），以及窗口宽高比 (SCR_WIDTH / SCR_HEIGHT)，并设置近剪裁面和远剪裁面（0.1 和 100.0）来生成投影矩阵。这个矩阵将 3D 场景投影到 2D 屏幕上。
    视图矩阵 (view)：通过摄像机位置和方向生成视图矩阵，控制摄像机的视角，确定在场景中从哪个角度观察物体。
    模型矩阵 (model)：用于确定物体的变换，包括位移、旋转、缩放等操作。在该函数中，模型矩阵被缩放了 7 倍。
    
    model可以使任意变换后的效果，也可以是多种变换叠加的效果比如
        model = glm::translate(model, glm::vec3(10.0f, 0.0f, 0.0f));  // 平移
        model = glm::rotate(model, glm::radians(45.0f), glm::vec3(0.0f, 1.0f, 0.0f));  // 旋转
        model = glm::scale(model, glm::vec3(2.0f, 2.0f, 2.0f));  // 缩放*/
    void setTransform(glm::mat4 model,Camera camera,int SCR_WIDTH,int SCR_HEIGHT)
    {
        glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
        setMat4("projection", projection);
        glm::mat4 view = camera.GetViewMatrix();
        setMat4("view", view);
        setMat4("model", glm::scale(model, glm::vec3(7.f, 7.f, 7.f)));
    }


    void setBool(const std::string& name, bool value) const
    {
        glUniform1i(glGetUniformLocation(ID, name.c_str()), (int)value);
    }
    // ------------------------------------------------------------------------
    void setInt(const std::string& name, int value) const
    {
        glUniform1i(glGetUniformLocation(ID, name.c_str()), value);
    }
    // ------------------------------------------------------------------------
    void setFloat(const std::string& name, float value) const
    {
        glUniform1f(glGetUniformLocation(ID, name.c_str()), value);
    }
    // ------------------------------------------------------------------------
    /**
     * @brief 向 OpenGL 着色器程序（Shader Program）中传递一个 vec2 类型的 uniform 变量
     * 
     * @param name 传入的 uniform 变量名称
     * @param value 要设置的 glm::vec2 类型的值
     */
    void setVec2(const std::string& name, const glm::vec2& value) const
    {
        glUniform2fv(glGetUniformLocation(ID, name.c_str()), 1, &value[0]);
    }
    /**
     * @brief 向 OpenGL 着色器程序（Shader Program）中传递一个 vec2 类型的 uniform 变量
     * 
     * @param name 传入的 uniform 变量名称
     * @param x 要设置的 vec2 的 x 分量值。
     * @param y 要设置的 vec2 的 y 分量值。
     */
    void setVec2(const std::string& name, float x, float y) const
    {
        glUniform2f(glGetUniformLocation(ID, name.c_str()), x, y);
    }
    // ------------------------------------------------------------------------
    void setVec3(const std::string& name, const glm::vec3& value) const
    {
        glUniform3fv(glGetUniformLocation(ID, name.c_str()), 1, &value[0]);
    }
    void setVec3(const std::string& name, float x, float y, float z) const
    {
        glUniform3f(glGetUniformLocation(ID, name.c_str()), x, y, z);
    }
    // ------------------------------------------------------------------------
    void setVec4(const std::string& name, const glm::vec4& value) const
    {
        glUniform4fv(glGetUniformLocation(ID, name.c_str()), 1, &value[0]);
    }
    void setVec4(const std::string& name, float x, float y, float z, float w) const
    {
        glUniform4f(glGetUniformLocation(ID, name.c_str()), x, y, z, w);
    }
    // ------------------------------------------------------------------------

    /**
     * @brief 用于向 OpenGL 着色器程序（Shader Program）中传递一个 mat2 类型的 uniform 变量（2x2 矩阵）
     * 
     * @param name uniform 变量的名称，作为字符串传入。
     * @param mat 要设置的 glm::mat2 类型的值，即 2x2 矩阵。
     */
    void setMat2(const std::string& name, const glm::mat2& mat) const
    {
        glUniformMatrix2fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
    }
    // ------------------------------------------------------------------------
    void setMat3(const std::string& name, const glm::mat3& mat) const
    {
        glUniformMatrix3fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
    }
    // ------------------------------------------------------------------------
    void setMat4(const std::string& name, const glm::mat4& mat) const
    {
        glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
    }

private:
    // utility function for checking shader compilation/linking errors.
    // ------------------------------------------------------------------------
    /**
     * @brief 检查着色器编译或程序链接过程中是否出现错误，并输出相应的错误信息
     * 
     * @param shader 要检查的着色器对象或程序对象的标识符（ID）
     * @param type 表示要检查的对象类型，可以是 "VERTEX", "FRAGMENT", "PROGRAM" 等字符串
     */
    void checkCompileErrors(GLuint shader, std::string type)
    {
        GLint success;
        GLchar infoLog[1024];
        if (type != "PROGRAM")
        {
            glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
            if (!success)
            {
                glGetShaderInfoLog(shader, 1024, NULL, infoLog);
                std::cout << "ERROR::SHADER_COMPILATION_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
            }
        }
        else
        {
            glGetProgramiv(shader, GL_LINK_STATUS, &success);
            if (!success)
            {
                glGetProgramInfoLog(shader, 1024, NULL, infoLog);
                std::cout << "ERROR::PROGRAM_LINKING_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
            }
        }
    }
};
#endif