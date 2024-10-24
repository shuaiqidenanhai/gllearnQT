#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stb_image.h>

#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "shader_m.h"
#include "camera.h"

#include <iostream>

#include <cmath>
#include <vector>


extern int SCR_WIDTH;
extern int SCR_HEIGHT;
extern Camera camera;
extern float lastX ;
extern float lastY;
extern bool firstMouse;
// timing
extern float deltaTime;	// time between current frame and last frame
extern float lastFrame;
extern float rotationAngle;
extern float rotationSpeed; 
extern bool rotatingClockwise; // 齿轮旋转方向
extern bool isRotating;
extern float savedRotationAngle;
extern bool pKeyPressed; 
extern float rotationSpeedChange;

extern bool isLeftMousePressed;
extern double lastMouseX, lastMouseY;
extern glm::vec3 selectedModelPosition;

extern float modelRotationAngleX;
extern float modelRotationAngleY;




void adjustAspectRatio(GLFWwindow* window, int targetWidth, int targetHeight);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void processInput(GLFWwindow* window);
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods);
void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);