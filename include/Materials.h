#pragma once
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <cmath>
#include <vector>

struct Material
{
    glm::vec3 Ambient;
    glm::vec3 Diffuse;
    glm::vec3 Specular;
    float Shininess;
};

class Materials
{
public:
    static Material emerald;
    static Material jade;
    static Material obsidian;
    static Material pearl;
    static Material ruby;
    static Material turquoise;
    static Material brass;
    static Material bronze;
    static Material chrome;
    static Material copper;
    static Material gold;
    static Material silver;
    static Material black_plastic;
    static Material cyan_plastic;
    static Material green_plastic;
    static Material red_plastic;
    static Material white_plastic;
    static Material yellow_plastic;
    static Material black_rubber;
    static Material cyan_rubber;
    static Material green_rubber;
    static Material red_rubber;
    static Material white_rubber;
    static Material yellow_rubber;

 };
