#include "setting.h"

// settings
int SCR_WIDTH = 1024;
int SCR_HEIGHT = 768;

// camera
glm::vec3 position(0.0f, 0.0f, 10.f);
Camera camera(position);
float lastX = SCR_WIDTH / 2.0f;
float lastY = SCR_HEIGHT / 2.0f;
bool firstMouse = true;

// timing
float deltaTime = 0.0f; // time between current frame and last frame
float lastFrame = 0.0f;

// rotation
float rotationAngle = 0.0f;
float rotationSpeed = 45.0f; // degrees per second
float rotationSpeedChange = 100.0f; // speed change per key press
bool isRotating = false;
float savedRotationAngle = 0.0f;
bool pKeyPressed = false; // track p key state
float frameTime = 0.016f; // 每帧时间间隔，假设60 FPS
bool rotatingClockwise = true; // 齿轮旋转方向


bool isLeftMousePressed = false;
bool isMiddleMousePressed = false;
double lastMouseX, lastMouseY;

float modelRotationAngleX = 0.0f;
float modelRotationAngleY = 0.0f;croll_callback
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}
void adjustAspectRatio(GLFWwindow* window, int targetWidth, int targetHeight)
{
    int currentWidth, currentHeight;
    glfwGetWindowSize(window, &currentWidth, &currentHeight);

    float targetRatio = static_cast<float>(targetWidth) / static_cast<float>(targetHeight);
    float currentRatio = static_cast<float>(currentWidth) / static_cast<float>(currentHeight);

    if (currentRatio > targetRatio) {
        int newWidth = static_cast<int>(currentHeight * targetRatio);
        int newHeight = currentHeight;
        glfwSetWindowSize(window, newWidth, newHeight);
    }
    else {
        int newWidth = currentWidth;
        int newHeight = static_cast<int>(currentWidth / targetRatio);
        glfwSetWindowSize(window, newWidth, newHeight);
    }
}

// glfw: whenever the mouse moves, this callback is called
// -------------------------------------------------------
// 鼠标回调函数
void mouse_callback(GLFWwindow* window, double xpos, double ypos) {
    if (isLeftMousePressed) {
        if (firstMouse) {
            lastX = xpos;
            lastY = ypos;
            firstMouse = false;
        }

        float xoffset = xpos - lastX;
        float yoffset = lastY - ypos; // 注意 y 轴坐标是反向的
        lastX = xpos;
        lastY = ypos;

        float sensitivity = 0.001f; // 调整此值以控制平移速度
        xoffset *= sensitivity;
        yoffset *= sensitivity;

        // 使用相机的键盘处理函数来处理平移
        camera.ProcessKeyboard(RIGHT, xoffset);
        camera.ProcessKeyboard(UP, yoffset);
    } else if (isMiddleMousePressed) {
        if (firstMouse) {
            lastX = xpos;
            lastY = ypos;
            firstMouse = false;
        }

        float xoffset = xpos - lastX;
        float yoffset = lastY - ypos; // 注意 y 轴坐标是反向的
        lastX = xpos;
        lastY = ypos;

        float sensitivity = 0.5f; // 调整此值以控制旋转速度
        xoffset *= sensitivity;
        yoffset *= sensitivity;

        // 使用相机的鼠标移动函数来处理旋转
        camera.ProcessMouseMovement(xoffset, yoffset);
    } else {
        firstMouse = true;
    }
}

// 鼠标按键回调函数
void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
        isLeftMousePressed = true;
        firstMouse = true; // 重置第一次鼠标检查
    } else if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_RELEASE) {
        isLeftMousePressed = false;
    } else if (button == GLFW_MOUSE_BUTTON_MIDDLE && action == GLFW_PRESS) {
        isMiddleMousePressed = true;
        firstMouse = true; // 重置第一次鼠标检查
    } else if (button == GLFW_MOUSE_BUTTON_MIDDLE && action == GLFW_RELEASE) {
        isMiddleMousePressed = false;
    }
}

// 鼠标滚轮回调函数
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset) {
    camera.ProcessMouseScroll(static_cast<float>(yoffset));
}

// 键盘输入处理函数
void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    // Control gear rotation with UP and DOWN arrow keys
    if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS) {
        rotationAngle -= rotationSpeed * deltaTime; // rotate gear counterclockwise
        rotatingClockwise = false; // 设置旋转方向为反向
    }

    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS) {
        rotationAngle += rotationSpeed * deltaTime; // rotate gear clockwise
        rotatingClockwise = true; // 设置旋转方向为正向
    }

    // Toggle rotation with P key
    if (glfwGetKey(window, GLFW_KEY_P) == GLFW_PRESS) {
        if (!pKeyPressed) {
            isRotating = !isRotating; // toggle rotation state
            if (isRotating) {
                rotationAngle = savedRotationAngle; // restore saved rotation angle
            } else {
                savedRotationAngle = rotationAngle; // save current rotation angle
            }
            pKeyPressed = true; // mark P key as pressed
        }
    } else {
        pKeyPressed = false; // reset P key press state
    }
}