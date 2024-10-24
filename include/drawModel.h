#pragma once
#include "headInclude.h"
#include "shader_m.h"
#include<object.h>
class drawModel:public object
{

    public:

        drawModel(glm::vec3 startPosition);
        const glm::vec3 startPosition;
        unsigned int VAO, vboVertices, vboNormals,EBO;
        std::vector<glm::vec3> *vertices = new std::vector<glm::vec3>;
        std::vector<int> *indices = new std::vector<int>();
        std::vector<glm::vec3> *normals = new std::vector<glm::vec3>;

        void drawCircle(GLfloat z,GLfloat r , std::vector<glm::vec3>& vertices);
        void delVertice(){
            delete vertices,indices,normals;
        }
        void setupBuffers();

        ~drawModel() {
            delete vertices,indices,normals;
            // glDeleteVertexArrays(1, &VAO);
            // glDeleteBuffers(1, &vboVertices);
            // glDeleteBuffers(1, &vboNormals);
         }

        void printVertices() {
            std::cout << "Vertices data:\n";
            // 使用解引用运算符访问 vector
            for (const auto& vertex : *vertices) { 
                std::cout << "Vertex: (" << vertex.x << ", " << vertex.y << ", " << vertex.z << ")\n";
            }
        }
        void setIndiceBuffer();
    protected:

        float scale = 200.f;
        
        void calculateVertexNormals();
        glm::vec3 vectorImage(glm::vec3 v1, glm::vec3 v2,int i);

        void pushVertex(std::vector<glm::vec3>& vertices, const glm::vec3& vertex1, const glm::vec3& vertex2, const glm::vec3& vertex3, const glm::vec3& vertex4);
        void pushVertex(std::vector<glm::vec3>& vertices, const glm::vec3& vertex1, const glm::vec3& vertex2, const glm::vec3& vertex3);
        void pushVertex(std::vector<glm::vec3>& vertices, const glm::vec3& vertex1, const glm::vec3& vertex2);
        void pushIndices(std::vector<int>& indices, const int& i1, const int& i2, const int& i3);



        
        double f(double currentAngle, double Br, double Ar);
        double df(double currentAngle, double Br);
        double findCurrentAngle(double Br, double Ar, double initialGuess = 0.0, double tolerance = 1e-6, int maxIterations = 1000);

        void setStartPosition() {
            for (int i = 0; i < vertices->size(); ++i) {
                (*vertices)[i].x += startPosition.x;
                (*vertices)[i].y += startPosition.y;
                (*vertices)[i].z += startPosition.z;
            }
        }
};