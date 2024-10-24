#pragma once

#include <cmath>
#include <vector>
#include "camera.h"

class Coordinate 
{
    public:
    std::vector<float> line_vertices;
    unsigned int VAO, VBO;

    Coordinate()
    {
        line_vertices= {
            //position    //color
            0.f, 0.f, 0.f, 1.f,0.f,0.f,
            1.f, 0.f, 0.f,1.f,0.f,0.f,
            1.f, 0.f, 0.f, 1.f,0.f,0.f,
            0.8f, -0.2f, 0.f,1.f,0.f,0.f,
            1.f, 0.f, 0.f, 1.f,0.f,0.f,
            0.8f, 0.2f, 0.f,1.f,0.f,0.f,
            
            
            //position    //color
            0.f, 0.f, 0.f, 0.f,1.f,0.f,
            0.f, 1.f, 0.f,0.f,1.f,0.f,
            0.f, 1.f, 0.f, 0.f,1.f,0.f,
            -0.2f, 0.8f, 0.f,0.f,1.f,0.f,
            0.f, 1.f, 0.f, 0.f,1.f,0.f,
            0.2f, 0.8f, 0.f,0.f,1.f,0.f,
            
            
            //position    //color
            0.f, 0.f, 0.f, 0.f,0.f,1.f,
            0.f, 0.f, 1.f,0.f,0.f,1.f,
            0.f, 0.f, 1.f, 0.f,0.f,1.f,
            0.f, 0.2f, 0.8f,0.f,0.f,1.f,
            0.f, 0.f, 1.f, 0.f,0.f,1.f,
            0.f, -0.2f, 0.8f,0.f,0.f,1.f
            
        };

        glGenVertexArrays(1, &VAO);
        glGenBuffers(1, &VBO);

        glBindVertexArray(VAO);

        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        glBufferData(GL_ARRAY_BUFFER, line_vertices.size() * sizeof(float), line_vertices.data(), GL_STATIC_DRAW);

        // Assuming the vertex data is structured as positions followed by colors
        // and each vertex has 6 floats (3 for position, 3 for color)
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindVertexArray(0);
    }
    
  
};
