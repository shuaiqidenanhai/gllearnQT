#include "drawBear.h"


drawBear::drawBear(float ballRadius, float Rdout,float Rdin, float RollOutWidth,float RollOutThick,float RollInWidth, float Rbore,glm::vec3 startPosition):
    drawModel(startPosition),
    shader("/home/siwan/testgl/gllearn/src/draw.vs", "/home/siwan/testgl/gllearn/src/draw.fs"),
    ballshader("/home/siwan/testgl/gllearn/src/draw.vs", "/home/siwan/testgl/gllearn/src/draw.fs")
    {
        this->ballRadius = ballRadius;
        this->Rdout=Rdout;
        this->Rdin=Rdin;
        this->Rdm=(Rdout+Rdin)/2;
        this->RollOutWidth=RollOutWidth;
        this->RollOutThick=RollOutThick;
        this->RollInWidth=RollInWidth;
        this->Rbore=Rbore;
        this->ballNum = (Rdout-ballRadius)/ballRadius/2+1;

    };


void drawBear::setShader(Camera camera,Material material)
{
    shader.setLight(glm::vec3(1.f,1.f,1.f),camera);
    shader.setMaterial(material);
}
void drawBear::setballShader(Camera camera,Material material)
{
    ballshader.setLight(glm::vec3(1.f,1.f,1.f),camera);
    ballshader.setMaterial(material);
}

void drawBear::setShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT){
    shader.setTransform(trans,camera,SCR_WIDTH,SCR_HEIGHT); 
}
void drawBear::setballShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT){
    ballshader.setTransform(trans,camera,SCR_WIDTH,SCR_HEIGHT); 
}



void drawBear::drawball(){
    ballRadius=ballRadius/scale;
    float latitudeSegments = 20;
    float longitudeSegments = 40;
    vertices->clear();
                                   
    for (int lat = 0; lat < latitudeSegments; ++lat) {
        // 纬度角 theta，从 -π/2 到 π/2
        float theta1 = lat * M_PI / latitudeSegments - M_PI / 2.0f;
        float theta2 = (lat + 1) * M_PI / latitudeSegments - M_PI / 2.0f;

        for (int lon = 0; lon < longitudeSegments; ++lon) {
            // 经度角 phi，从 0 到 2π
            float phi1 = lon * 2.0f * M_PI / longitudeSegments;
            float phi2 = (lon + 1) * 2.0f * M_PI / longitudeSegments;

            // 球体的四个顶点，用于两个三角形
            glm::vec3 v1 = {
                ballRadius * cos(theta1) * cos(phi1),
                ballRadius * cos(theta1) * sin(phi1),
                ballRadius * sin(theta1)
            };

            glm::vec3 v2 = {
                ballRadius * cos(theta1) * cos(phi2),
                ballRadius * cos(theta1) * sin(phi2),
                ballRadius * sin(theta1)
            };

            glm::vec3 v3 = {
                ballRadius * cos(theta2) * cos(phi2),
                ballRadius * cos(theta2) * sin(phi2),
                ballRadius * sin(theta2)
            };

            glm::vec3 v4 = {
                ballRadius * cos(theta2) * cos(phi1),
                ballRadius * cos(theta2) * sin(phi1),
                ballRadius * sin(theta2)
            };

            // 第一个三角形 v1, v2, v3
            vertices->push_back(v1);
            vertices->push_back(v2);
            vertices->push_back(v3);

            // 第二个三角形 v1, v3, v4
            vertices->push_back(v1);
            vertices->push_back(v3);
            vertices->push_back(v4);
        }
    }

}


void drawBear::drawballRing() {
    float latitudeSegments = 20;
    float longitudeSegments = 40;
    ballRadius = ballRadius/scale;
    Rdm = Rdm/scale;
    vertices->clear();

    // 按照极坐标排列 num 个球体
    for (int i = 0; i < ballNum; ++i) {
        // 计算每个球体的中心位置
        float angle = 2.0f * M_PI * i / ballNum;
        glm::vec3 center = {
            Rdm * cos(angle),  // 圆周上的x坐标
            Rdm * sin(angle),  // 圆周上的y坐标
            0.0f                 // z坐标平面上
        };

        // 为每个球体计算顶点
        for (int lat = 0; lat < latitudeSegments; ++lat) {
            float theta1 = lat * M_PI / latitudeSegments - M_PI / 2.0f;
            float theta2 = (lat + 1) * M_PI / latitudeSegments - M_PI / 2.0f;

            for (int lon = 0; lon < longitudeSegments; ++lon) {
                float phi1 = lon * 2.0f * M_PI / longitudeSegments;
                float phi2 = (lon + 1) * 2.0f * M_PI / longitudeSegments;

                // 球体的四个顶点
                glm::vec3 v1 = {
                    ballRadius * cos(theta1) * cos(phi1),
                    ballRadius * cos(theta1) * sin(phi1),
                    ballRadius * sin(theta1)
                };

                glm::vec3 v2 = {
                    ballRadius * cos(theta1) * cos(phi2),
                    ballRadius * cos(theta1) * sin(phi2),
                    ballRadius * sin(theta1)
                };

                glm::vec3 v3 = {
                    ballRadius * cos(theta2) * cos(phi2),
                    ballRadius * cos(theta2) * sin(phi2),
                    ballRadius * sin(theta2)
                };

                glm::vec3 v4 = {
                    ballRadius * cos(theta2) * cos(phi1),
                    ballRadius * cos(theta2) * sin(phi1),
                    ballRadius * sin(theta2)
                };

                // 将顶点平移到中心位置
                v1 += center;
                v2 += center;
                v3 += center;
                v4 += center;

                // 添加三角形 v1, v2, v3
                vertices->push_back(v1);
                vertices->push_back(v2);
                vertices->push_back(v3);

                // 添加三角形 v1, v3, v4
                vertices->push_back(v1);
                vertices->push_back(v3);
                vertices->push_back(v4);
            }
        }
    }
}



void drawBear::drawball1(){
    ballRadius = ballRadius / scale;  // 可以放到构造函数中
    float latitudeSegments = 20;
    float longitudeSegments = 40;
    ballvertices->clear();
    ballnormals->clear();

    for (int lat = 0; lat <= latitudeSegments; ++lat) {
        // 纬度角 theta，从 -π/2 到 π/2
        float theta = lat * M_PI / latitudeSegments - M_PI / 2.0f;
        float cosTheta = cos(theta);
        float sinTheta = sin(theta);

        for (int lon = 0; lon <= longitudeSegments; ++lon) {
            // 经度角 phi，从 0 到 2π
            float phi = lon * 2.0f * M_PI / longitudeSegments;
            float cosPhi = cos(phi);
            float sinPhi = sin(phi);

            // 计算顶点位置
            glm::vec3 point;
            point.x = ballRadius * cosTheta * cosPhi;
            point.y = ballRadius * cosTheta * sinPhi;
            point.z = ballRadius * sinTheta;

            // 计算法向量并存储
            glm::vec3 normal = glm::normalize(point);  // 直接使用顶点坐标的方向作为法向量
            ballvertices->push_back(point);
            ballnormals->push_back(normal);
        }
    }

    ballindices->clear();
    for (int lat = 0; lat < latitudeSegments; ++lat) {
        for (int lon = 0; lon < longitudeSegments; ++lon) {
            int first = lat * (longitudeSegments + 1) + lon;
            int second = first + longitudeSegments + 1;

            // 第一个三角形
            ballindices->push_back(first);
            ballindices->push_back(second);
            ballindices->push_back(first + 1);

            // 第二个三角形
            ballindices->push_back(second);
            ballindices->push_back(second + 1);
            ballindices->push_back(first + 1);
        }
    }
}

void drawBear::drawballRing1() {
    ballRadius = ballRadius / scale;  // 可以放到构造函数中
    Rdm = Rdm/scale;
    float latitudeSegments = 20;
    float longitudeSegments = 40;
    ballvertices->clear();
    ballnormals->clear();

    // 按照极坐标排列 num 个球体
    for (int i = 0; i < ballNum; ++i) {
        // 计算每个球体的中心位置
        float angle = 2.0f * M_PI * i / ballNum;
        float centerX = Rdm * cos(angle);  // 圆周上的x坐标
        float centerY = Rdm * sin(angle);  // 圆周上的y坐标
        float centerZ = 0.0f;                 // z坐标保持在平面上

        // 为每个球体生成顶点和法向量
        for (int lat = 0; lat <= latitudeSegments; ++lat) {
            // 纬度角 theta，从 -π/2 到 π/2
            float theta = lat * M_PI / latitudeSegments - M_PI / 2.0f;
            float cosTheta = cos(theta);
            float sinTheta = sin(theta);

            for (int lon = 0; lon <= longitudeSegments; ++lon) {
                // 经度角 phi，从 0 到 2π
                float phi = lon * 2.0f * M_PI / longitudeSegments;
                float cosPhi = cos(phi);
                float sinPhi = sin(phi);

                // 计算顶点位置
                glm::vec3 point;
                point.x = ballRadius * cosTheta * cosPhi;
                point.y = ballRadius * cosTheta * sinPhi;
                point.z = ballRadius * sinTheta;

                // 计算法向量并存储
                glm::vec3 normal = glm::normalize(point);

                // 将顶点平移到圆周上的中心位置
                point.x += centerX;
                point.y += centerY;
                point.z += centerZ;

                ballvertices->push_back(point);
                ballnormals->push_back(normal);
            }
        }
    }

    // 生成索引
    ballindices->clear();
    for (int i = 0; i < ballNum; ++i) {
        int baseIndex = i * (latitudeSegments + 1) * (longitudeSegments + 1);
        for (int lat = 0; lat < latitudeSegments; ++lat) {
            for (int lon = 0; lon < longitudeSegments; ++lon) {
                int first = baseIndex + lat * (longitudeSegments + 1) + lon;
                int second = first + longitudeSegments + 1;

                // 第一个三角形
                ballindices->push_back(first);
                ballindices->push_back(second);
                ballindices->push_back(first + 1);

                // 第二个三角形
                ballindices->push_back(second);
                ballindices->push_back(second + 1);
                ballindices->push_back(first + 1);
            }
        }
    }
}

void drawBear::calballsNormals(){
    ballnormals = new std::vector<glm::vec3>(ballvertices->size(), glm::vec3(0.0f));

    // 计算每个面的法向量
    for (int i = 0; i < ballindices->size(); i += 3) {
        unsigned int i1 = (*ballindices)[i];
        unsigned int i2 = (*ballindices)[i + 1];
        unsigned int i3 = (*ballindices)[i + 2];

        // 获取三角形的三个顶点
        glm::vec3 v1 = (*ballnormals)[i1];
        glm::vec3 v2 = (*ballnormals)[i2];
        glm::vec3 v3 = (*ballnormals)[i3];

        // 计算面的法向量
        glm::vec3 edge1 = v2 - v1;
        glm::vec3 edge2 = v3 - v1;
        glm::vec3 faceNormal = glm::normalize(glm::cross(edge1, edge2));

        // 将面的法向量加到对应顶点的法向量上
        (*ballnormals)[i1] += faceNormal;
        (*ballnormals)[i2] += faceNormal;
        (*ballnormals)[i3] += faceNormal;
    }

    // 归一化每个顶点的法向量
    for (int i = 0; i < ballnormals->size(); ++i) {
         (*ballnormals)[i] = glm::normalize((*ballnormals)[i]);
    }
}

void drawBear::drawRing(float outer,float inner,float width)
{
    std::vector<glm::vec3> Temvertices;
    float DR = outer / scale;
    float CR = inner / scale;
    float Z = (width/(2*scale));
    float H = -(width/(2*scale));
    
    int startIndex = Temvertices.size();
    int accuracy = 50;
    

    float da = 2.0f * glm::pi<float>() / accuracy;

    for (int i = 0; i < accuracy; ++i)
    {
        float currentAngle = i * 2.0f * glm::pi<float>() / accuracy;
        glm::vec3 vc = { CR * cos(currentAngle),CR * sin(currentAngle),Z };
        glm::vec3 vd = { DR * cos(currentAngle),DR * sin(currentAngle),Z };
        pushVertex(Temvertices, vc, vd);

        glm::vec3 vcb(vc.x, vc.y, H);
        glm::vec3 vdb(vd.x, vd.y, H);
        pushVertex(Temvertices, vcb, vdb);
    }

    for (int i = 0; i < 4*accuracy; i+=4)
    {
        int vc = i + startIndex, vcn = i + 4 + startIndex, vd = i + 1 + startIndex, vdn = i + 5 + startIndex, firstvc = startIndex, firstvd = 1 + startIndex;
        int vcb = vc + 2, vcnb = vcn + 2, vdb = vd + 2, vdnb = vdn + 2, firstvcb = firstvc + 2, firstvdb = firstvd + 2;
        if (i == 4 * (accuracy - 1))
        {   

            pushVertex(*vertices, Temvertices[vc], Temvertices[vd], Temvertices[firstvd]);
            pushVertex(*vertices, Temvertices[vc], Temvertices[firstvd], Temvertices[firstvc]);
            //pushIndices(indices, vc, vd, firstvd);
            //pushIndices(indices, vc, firstvd, firstvc);

            pushVertex(*vertices, Temvertices[firstvcb], Temvertices[firstvdb], Temvertices[vdb]);
            pushVertex(*vertices, Temvertices[firstvcb], Temvertices[vdb], Temvertices[vcb]);
            //pushIndices(indices, firstvcb, firstvdb, vdb);
            //pushIndices(indices, firstvcb, vdb, vcb);

            pushVertex(*vertices, Temvertices[vc], Temvertices[firstvc], Temvertices[firstvcb]);
            pushVertex(*vertices, Temvertices[vc], Temvertices[firstvcb], Temvertices[vcb]);
            //pushIndices(indices, vc, firstvc, firstvcb);
            //pushIndices(indices, vc, firstvcb, vcb);

            pushVertex(*vertices, Temvertices[vd], Temvertices[vdb], Temvertices[firstvdb]);
            pushVertex(*vertices, Temvertices[vd], Temvertices[firstvdb], Temvertices[firstvd]);
            //pushIndices(indices, vd, vdb, firstvdb);
            //pushIndices(indices, vd, firstvdb, firstvd);
        }
        else {
            pushVertex(*vertices, Temvertices[vc], Temvertices[vd], Temvertices[vdn]);
            pushVertex(*vertices, Temvertices[vc], Temvertices[vdn], Temvertices[vcn]);
            /*pushIndices(indices, vc, vd, vdn);
            pushIndices(indices, vc, vdn, vcn);*/

            pushVertex(*vertices, Temvertices[vcnb], Temvertices[vdnb], Temvertices[vdb]);
            pushVertex(*vertices, Temvertices[vcnb], Temvertices[vdb], Temvertices[vcb]);
            /*pushIndices(indices, vcnb, vdnb, vdb);
            pushIndices(indices, vcnb, vdb, vcb);*/

            pushVertex(*vertices, Temvertices[vc], Temvertices[vcn], Temvertices[vcnb]);
            pushVertex(*vertices, Temvertices[vc], Temvertices[vcnb], Temvertices[vcb]);
            /*pushIndices(indices, vc, vcn, vcnb);
            pushIndices(indices, vc, vcnb, vcb);*/

            pushVertex(*vertices, Temvertices[vd], Temvertices[vdb], Temvertices[vdnb]);
            pushVertex(*vertices, Temvertices[vd], Temvertices[vdnb], Temvertices[vdn]);
            /*pushIndices(indices, vd, vdb, vdnb);
            pushIndices(indices, vd, vdnb, vdn);*/
        }
    }
}


void drawBear::drawSpurBear() {
    // drawHorn();
    // drawRoot();
    // drawball();
    drawballRing1();
    // drawball1();
 
    drawRing(Rdout+RollOutThick,Rdout,RollOutWidth);     //外滚道，外滚道半径是给出的，确定了外滚道圆环内侧半径，外滚道外侧半径等于外滚道半径加外滚道厚度：Roo = Rout+rollThick
    drawRing(Rdin,Rbore,RollInWidth);                   //内滚道,内滚道半径已经给出，内滚道外侧半径是内滚道半径，内滚道内侧半径是轴承孔径
    calculateVertexNormals();
    setStartPosition();//这个函数是对vertices生效的，球体是ballvertices


};


void drawBear::setballBuffer(){

    glGenVertexArrays(1, &ballVAO);
    glBindVertexArray(ballVAO);


    glGenBuffers(1, &ballvboVertices);
    glBindBuffer(GL_ARRAY_BUFFER, ballvboVertices);
    glBufferData(GL_ARRAY_BUFFER, this->ballvertices->size() * sizeof(glm::vec3), this->ballvertices->data(), GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    
    glGenBuffers(1, &ballvboNormals);
    glBindBuffer(GL_ARRAY_BUFFER, ballvboNormals);
    glBufferData(GL_ARRAY_BUFFER, this->ballnormals->size() * sizeof(glm::vec3), this->ballnormals->data(), GL_STATIC_DRAW);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
    glEnableVertexAttribArray(1);

    glGenBuffers(1, &ballEBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ballEBO);
    if (this->ballindices->empty()) {
    std::cerr << "Indices vector is empty!" << std::endl;
    } else {
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, this->ballindices->size() * sizeof(int), this->ballindices->data(), GL_STATIC_DRAW);
    }
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

}

void drawBear::renderBalls() {
    glBindVertexArray(ballVAO);
    glDrawElements(GL_TRIANGLES, ballindices->size(), GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}

void drawBear::renderRing() {
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, vertices->size());
    glBindVertexArray(0);  // 解绑 VAO
}