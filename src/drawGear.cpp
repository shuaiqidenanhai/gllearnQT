#include "drawGear.h"


drawGear::drawGear(float m, int N, float Angle,float width, float Cr,glm::vec3 startPosition):drawModel(startPosition),shader("/home/siwan/testgl/gllearn/src/draw.vs", "/home/siwan/testgl/gllearn/src/draw.fs")
{
    module = m;
    pressAngle = Angle;                       
    numTeeth = N;
    p = M_PI * m;                             
    gearThickness = p / 2;                    
    Pd = m * N;                               
    Pr = 0.5 * m * N;                         
    Ar = Pr + m;                              
    Dr = Pr - (1.25 * m);                     
    Br = Pr * cos(pressAngle);                
    this->Cr = Cr;
    z= width/2;
    h= -width/2;
    
};


void drawGear::setShader(Camera camera,Material material){
    shader.setLight(glm::vec3(1.f,1.f,1.f),camera);
    shader.setMaterial(material);
}

void drawGear::setShaderTran(glm::mat4 trans,Camera camera,int SCR_WIDTH,int SCR_HEIGHT){
    shader.setTransform(trans,camera,SCR_WIDTH,SCR_HEIGHT); 
}





void drawGear::drawRing()
{
    std::vector<glm::vec3> Temvertices;
    float DR = Dr / scale;
    float CR = Cr / scale;
    printf("Dr is : %f\n",DR);
    printf("Cr is : %f\n",CR);
    float Z = z/scale;
    float H = h/scale;
    if (DR < CR)
    {
        std::cerr << "Cr is too large!" << std::endl;
        CR = 0.1;

    }
    int startIndex = Temvertices.size();
    int accuracy;
    if (numTeeth <= 20) {
        accuracy = numTeeth * 5;
    }
    else
    {
        accuracy = numTeeth;
    }

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

//GLfloat z, GLfloat h, GLfloat Cr, std::vector<glm::vec3>& vertices1, std::vector<int>& indices
void drawGear::drawRoot()
{
    std::vector<glm::vec3> Temvertices;
    float Z = z/scale;
    float H = h/scale;

    if (Br < Dr)
    {
        std::cout << "too much Teeth" << std::endl;
        return;
    }

    float BR = Br / scale;
    float PR = Pr / scale;
    float AR = Ar / scale;
    float DR = Dr / scale;
    int startIndex = Temvertices.size();
    int accuracy = 200;
    float da = 2.0f * glm::pi<float>() / accuracy;
    float angleX = p / (2 * Pd);


    for (int j = 0; j < numTeeth; ++j)
    {
        float currentTeeth = j * 2.0f * glm::pi<float>() / numTeeth;

        double drAngle = findCurrentAngle((double)BR, (double)PR);
        glm::vec3 vdr = { BR * (cos(drAngle) + drAngle * (sin(drAngle))),
                             BR * (sin(drAngle) - drAngle * (cos(drAngle))),
                             Z };
        glm::mat4 rotationMatrix1 = glm::rotate(glm::mat4(1.0), angleX, glm::vec3(0.0f, 0.0f, 1.0f));
        glm::mat4 rotationMatrix = glm::rotate(glm::mat4(1.0), currentTeeth, glm::vec3(0.0f, 0.0f, 1.0f));
        vdr = glm::vec3(rotationMatrix * rotationMatrix1 * glm::vec4(vdr, 1.0));

        glm::vec3 symmetryAxis = vdr;

        glm::vec3 vb = { BR * cos(currentTeeth),BR * sin(currentTeeth),Z };
        glm::vec3 vd = { DR * cos(currentTeeth),DR * sin(currentTeeth),Z };
        glm::vec3 vbi = vectorImage(vb, symmetryAxis,2);
        glm::vec3 vdi = vectorImage(vd, symmetryAxis,2);
        pushVertex(Temvertices, vd,vb,vdi,vbi);
       
        glm::vec3 vbb(vb.x, vb.y, H);
        glm::vec3 vdb(vd.x, vd.y, H);
        glm::vec3 vbib(vbi.x, vbi.y, H);
        glm::vec3 vdib(vdi.x, vdi.y, H);
        pushVertex(Temvertices, vdb, vbb,vdib,vbib);
    }

    for (int j = 0; j < 8*numTeeth; j+=8)
    {
        int vd = j+ startIndex, vb = j + 1 + startIndex, vdi = j + 2 + startIndex, vbi = j + 3 + startIndex;
        /*pushIndices(indices, vd, vb,vbi);
        pushIndices(indices, vd, vbi, vdi);*/
        pushVertex(*vertices, Temvertices[vd], Temvertices[vb], Temvertices[vbi]);
        pushVertex(*vertices, Temvertices[vd], Temvertices[vbi], Temvertices[vdi]);

        int vdb = vd + 4, vbb = vb + 4, vdib = vdi + 4, vbib = vbi + 4;
        /*pushIndices(indices, vdb, vbib, vbb);
        pushIndices(indices, vdb, vdib, vbib);*/
        pushVertex(*vertices, Temvertices[vdb], Temvertices[vbib], Temvertices[vbb]);
        pushVertex(*vertices, Temvertices[vdb], Temvertices[vdib], Temvertices[vbib]);

        /*pushIndices(indices, vdb, vbb, vb);
        pushIndices(indices, vdb, vb, vd);*/
        pushVertex(*vertices, Temvertices[vdb], Temvertices[vbb], Temvertices[vb]);
        pushVertex(*vertices, Temvertices[vdb], Temvertices[vb], Temvertices[vd]);

        /*pushIndices(indices, vdi, vbi, vbib);
        pushIndices(indices, vdi, vbib, vdib);*/
        pushVertex(*vertices, Temvertices[vdi], Temvertices[vbi], Temvertices[vbib]);
        pushVertex(*vertices, Temvertices[vdi], Temvertices[vbib], Temvertices[vdib]);
    }
}

//GLfloat z, GLfloat h, GLfloat Cr, std::vector<glm::vec3>& vertices1, std::vector<int>& indices
void drawGear::drawHorn()
{
    std::vector<glm::vec3> Temvertices;
    float BR = Br / scale;
    float PR = Pr / scale;
    float AR = Ar / scale;
    float DR = Dr / scale;
    float Z = z/scale;
    float H = h/scale;

    /*numTeeth = 1;*/
    int accuracy = 200;
    float da = 2.0f * glm::pi<float>() / accuracy;
    float angleX = p / (2 * Pd);

    for (int j = 0; j < numTeeth; ++j)
    {
        int startIndex = Temvertices.size();
        float angle = j * 2.0f * glm::pi<float>() / numTeeth;
        double drAngle = findCurrentAngle((double)BR,(double)PR);
        glm::vec3 vdr = { BR * (cos(drAngle) + drAngle * (sin(drAngle))),
                             BR * (sin(drAngle) - drAngle * (cos(drAngle))),
                             Z };
        glm::mat4 rotationMatrix1 = glm::rotate(glm::mat4(1.0), angleX, glm::vec3(0.0f, 0.0f, 1.0f));
        glm::mat4 rotationMatrix = glm::rotate(glm::mat4(1.0), angle, glm::vec3(0.0f, 0.0f, 1.0f));
        vdr = glm::vec3(rotationMatrix * rotationMatrix1 * glm::vec4(vdr, 1.0));


        glm::vec3 symmetryAxis = vdr;
        glm::vec3 symmetryAxish(vdr.x, vdr.y, H);
        for (int i = 0; i < accuracy; ++i)
        {
            float aaaangle = 2.0f * glm::pi<float>() / accuracy;
            float currentAngle = i * 2.0f * glm::pi<float>() / accuracy;
            glm::vec3 v1 = { BR * (cos(currentAngle) + currentAngle * (sin(currentAngle))),
                             BR * (sin(currentAngle) - currentAngle * (cos(currentAngle))),
                             Z };
            v1 = glm::vec3(rotationMatrix * glm::vec4(v1, 1.0));
            glm::vec3 v1i = vectorImage(v1, symmetryAxis,2);
             
            glm::vec3 v1ih(v1i.x, v1i.y, H);
            glm::vec2 v1_2(v1.x, v1.y);
            float lengthV1_2 = glm::length(v1_2);

            glm::vec3 v1n = { BR * (cos(currentAngle + aaaangle) + (currentAngle + aaaangle) * (sin(currentAngle + aaaangle))),
                             BR * (sin(currentAngle + aaaangle) - (currentAngle + aaaangle) * (cos(currentAngle + aaaangle))),
                             Z };
            glm::vec3 v1h(v1.x, v1.y, H);
            glm::vec2 v1_2n(v1n.x, v1n.y);
            float lengthV1_2n = glm::length(v1_2n);
            if (lengthV1_2 < DR)
            {
                if (lengthV1_2n > DR)
                {
                    /*double drAngle = findCurrentAngle((double)BR, (double)DR);
                    glm::vec3 v1 = { BR * (cos(drAngle) + drAngle * (sin(drAngle))),
                                         BR * (sin(drAngle) - drAngle * (cos(drAngle))),
                                         z };
                    v1 = glm::vec3(rotationMatrix * glm::vec4(v1, 1.0));
                    v1i = vectorImage(v1, symmetryAxis, 2);
                    v1h = glm::vec3(v1.x, v1.y, h);
                    v1ih = glm::vec3(v1i.x, v1i.y, h);*/
                    pushVertex(Temvertices, v1, v1i);
                    pushVertex(Temvertices, v1h, v1ih);
                }
                continue;
            }
                
            if (lengthV1_2 >= AR)
            {
                double drAngle = findCurrentAngle((double)BR, (double)AR);
                glm::vec3 v1 = { BR * (cos(drAngle) + drAngle * (sin(drAngle))),
                                     BR * (sin(drAngle) - drAngle * (cos(drAngle))),
                                     Z };
                v1 = glm::vec3(rotationMatrix * glm::vec4(v1, 1.0));
                v1i = vectorImage(v1, symmetryAxis, 2);
                v1h = glm::vec3(v1.x, v1.y, H);
                v1ih =glm::vec3(v1i.x, v1i.y, H);
                pushVertex(Temvertices, v1, v1i);
                pushVertex(Temvertices, v1h, v1ih);

                break;
            }
            else
            {
                pushVertex(Temvertices, v1, v1i);
                pushVertex(Temvertices, v1h, v1ih);
            }
        }
        int num = Temvertices.size() - startIndex;
        for (int i = 0; i < num-4; i+=4)
        {
            int v1 = i + startIndex, v1i = i + 1 + startIndex, v1n = i + 4 + startIndex, v1in = i + 5 + startIndex;
            int v1h = i + startIndex + 2, v1ih = i + 1 + startIndex + 2, v1nh = i + 4 + startIndex + 2, v1inh = i + 5 + startIndex + 2;

            //????
            pushVertex(*vertices, Temvertices[v1], Temvertices[v1n], Temvertices[v1in]);
            pushVertex(*vertices, Temvertices[v1], Temvertices[v1in], Temvertices[v1i]);
            /*pushIndices(indices, v1, v1n, v1in);
            pushIndices(indices, v1, v1in, v1i);*/

            //????
            pushVertex(*vertices, Temvertices[v1h], Temvertices[v1inh], Temvertices[v1nh]);
            pushVertex(*vertices, Temvertices[v1h], Temvertices[v1ih], Temvertices[v1inh]);
            /*pushIndices(indices, v1h, v1inh, v1nh);
            pushIndices(indices, v1h, v1ih, v1inh);*/

            //???
            pushVertex(*vertices, Temvertices[v1h], Temvertices[v1nh], Temvertices[v1n]);
            pushVertex(*vertices, Temvertices[v1h], Temvertices[v1n], Temvertices[v1]);
            /*pushIndices(indices, v1h, v1nh, v1n);
            pushIndices(indices, v1h, v1n, v1);*/

            //?????
            pushVertex(*vertices, Temvertices[v1i], Temvertices[v1in], Temvertices[v1inh]);
            pushVertex(*vertices, Temvertices[v1i], Temvertices[v1inh], Temvertices[v1ih]);
            /*pushIndices(indices, v1i, v1in, v1inh);
            pushIndices(indices, v1i, v1inh, v1ih);*/

            //????
            if (i == num - 8)
            {
                pushVertex(*vertices, Temvertices[v1n], Temvertices[v1nh], Temvertices[v1inh]);
                pushVertex(*vertices, Temvertices[v1n], Temvertices[v1inh], Temvertices[v1in]);
                /*pushIndices(indices, v1n, v1nh, v1inh);
                pushIndices(indices,v1n,v1inh,v1in);*/
            }  
        }
    }
}


void drawGear::drawSpurGear() {
    drawHorn();
    drawRoot();
    drawRing();
    calculateVertexNormals();
    setStartPosition();

};

