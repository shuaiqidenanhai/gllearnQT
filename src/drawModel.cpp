#include "drawModel.h"


drawModel::drawModel(glm::vec3 startPosition):startPosition(startPosition){

}

void drawModel::drawCircle(GLfloat z,GLfloat r,std::vector<glm::vec3>& vertices)
{
    float R = r/scale;
    int accuracy = 200;
    float angle =  2.0f * glm::pi<float>() / accuracy;
    for (int i = 0; i < accuracy; ++i)
    {
        float currentAngle = i * 2.0f * glm::pi<float>() / accuracy;
        glm::vec3 vb = { R * cos(currentAngle),R * sin(currentAngle),z };
        glm::vec3 vbn = { R * cos(currentAngle+ angle),R * sin(currentAngle+ angle),z };
        pushVertex(vertices, vb, vbn);
    }

}


glm::vec3 drawModel::vectorImage(glm::vec3 v1, glm::vec3 v2,int i) 
{
    float angleRadians = glm::acos(glm::dot(v1, v2) / (glm::length(v1) * glm::length(v2)));

    glm::mat4 rotationMatrix = glm::rotate(glm::mat4(1.0f), i * angleRadians, glm::vec3(0.0f, 0.0f, 1.0f));
    glm::vec3 rotatedVector = glm::vec3(rotationMatrix * glm::vec4(v1, 1.0f));
    return rotatedVector;
}


void drawModel::calculateVertexNormals()
{
    (*normals).resize((*vertices).size());
    for (int i = 0; i < (*vertices).size(); i += 3)
    {
  
        int i1 = i, i2 = i+1, i3 = i+2;  
        glm::vec3 v1 = (*vertices)[i1];  
        glm::vec3 v2 = (*vertices)[i2];
        glm::vec3 v3 = (*vertices)[i3];

        // ?????�Q????
        glm::vec3 faceNormal = normalize(cross(v2 - v1, v3 - v1));

        // ???�Q??????????????????????
        (*normals)[i1] = faceNormal;
        (*normals)[i2] = faceNormal; 
        (*normals)[i3] = faceNormal;
    }
}
void drawModel::pushVertex(std::vector<glm::vec3>& vertices, const glm::vec3& vertex1, const glm::vec3& vertex2, const glm::vec3& vertex3, const glm::vec3& vertex4)
{
    vertices.emplace_back(vertex1);
    vertices.emplace_back(vertex2);
    vertices.emplace_back(vertex3);
    vertices.emplace_back(vertex4);

}
void drawModel::pushVertex(std::vector<glm::vec3>& vertices, const glm::vec3& vertex1, const glm::vec3& vertex2, const glm::vec3& vertex3)
{
    vertices.emplace_back(vertex1);
    vertices.emplace_back(vertex2);
    vertices.emplace_back(vertex3);
}
void drawModel::pushVertex(std::vector<glm::vec3>& vertices, const glm::vec3& vertex1, const glm::vec3& vertex2)
{
    vertices.emplace_back(vertex1);
    vertices.emplace_back(vertex2);
}
void drawModel::pushIndices(std::vector<int>& indices, const int& i1, const int& i2, const int& i3)
{
    indices.emplace_back(i1);
    indices.emplace_back(i2);
    indices.emplace_back(i3);
}

double drawModel::f(double currentAngle, double Br, double Ar) {
    double x = Br * (cos(currentAngle) + currentAngle * sin(currentAngle));
    double y = Br * (sin(currentAngle) - currentAngle * cos(currentAngle));
    double v1_length = sqrt(x * x + y * y);
    return v1_length - Ar;
}
double drawModel::df(double currentAngle, double Br) {
    double cosAngle = cos(currentAngle);
    double sinAngle = sin(currentAngle);
    double term1 = Br * (sinAngle + currentAngle * cosAngle); // ??x?????
    double term2 = Br * (cosAngle - currentAngle * sinAngle); // ??y?????
    double v1_length_derivative = (term1 * term1 + term2 * term2) / sqrt(term1 * term1 + term2 * term2);
    return v1_length_derivative;
}
double drawModel::findCurrentAngle(double Br, double Ar, double initialGuess, double tolerance, int maxIterations ){
    double currentAngle = initialGuess;
    int iteration = 0;

    while (iteration < maxIterations) {
        double f_val = f(currentAngle, Br, Ar);
        double df_val = df(currentAngle, Br);

        double nextAngle = currentAngle - f_val / df_val;

        if (fabs(nextAngle - currentAngle) < tolerance) {
            return nextAngle;
        }

        currentAngle = nextAngle;
        iteration++;
    }
    return currentAngle;
}

void drawModel::setupBuffers() {
        glGenVertexArrays(1, &VAO);
        glBindVertexArray(VAO);

    
        glGenBuffers(1, &vboVertices);
        glBindBuffer(GL_ARRAY_BUFFER, vboVertices);
        glBufferData(GL_ARRAY_BUFFER, this->vertices->size() * sizeof(glm::vec3), this->vertices->data(), GL_STATIC_DRAW);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);

        
        glGenBuffers(1, &vboNormals);
        glBindBuffer(GL_ARRAY_BUFFER, vboNormals);
        glBufferData(GL_ARRAY_BUFFER, this->normals->size() * sizeof(glm::vec3), this->normals->data(), GL_STATIC_DRAW);
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
        glEnableVertexAttribArray(1);

        
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindVertexArray(0);

}


void drawModel::setIndiceBuffer(){

    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);


    glGenBuffers(1, &vboVertices);
    glBindBuffer(GL_ARRAY_BUFFER, vboVertices);
    glBufferData(GL_ARRAY_BUFFER, this->vertices->size() * sizeof(glm::vec3), this->vertices->data(), GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    
    glGenBuffers(1, &vboNormals);
    glBindBuffer(GL_ARRAY_BUFFER, vboNormals);
    glBufferData(GL_ARRAY_BUFFER, this->normals->size() * sizeof(glm::vec3), this->normals->data(), GL_STATIC_DRAW);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(1);

    glGenBuffers(1, &EBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    if (this->indices->empty()) {
    std::cerr << "Indices vector is empty!" << std::endl;
    } else {
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, this->indices->size() * sizeof(int), this->indices->data(), GL_STATIC_DRAW);
    }
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

}


