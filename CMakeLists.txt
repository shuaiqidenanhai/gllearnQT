cmake_minimum_required(VERSION 3.0)
project(openglqt)

# 使用 C++ 11 标准
set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_BUILD_TYPE Debug)

# 设置Make程序路径
set(CMAKE_MAKE_PROGRAM /usr/bin/make)

# 启用自动MOC、RCC和UIC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# 设置Qt的路径
set(QT_PATH "/media/siwan/da5e2e8c-37d3-4302-b89b-d5bf40ad269f/QT/5.15.17/gcc_64")
set(CMAKE_PREFIX_PATH ${QT_PATH}/lib/cmake)

# 查找Qt5组件
find_package(Qt5 COMPONENTS Widgets REQUIRED)
if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

# 包含目录
include_directories(./include)


# 设置OpenGL的偏好
set(OpenGL_GL_PREFERENCE "GLVND")
# 查找OpenGL和Threads
find_package(OpenGL REQUIRED)
find_package(Threads REQUIRED)

# 链接库
link_libraries("/usr/lib/libglfw.so")
link_libraries("/usr/local/lib64/libassimp.so")

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# 查找源文件
file(GLOB_RECURSE SOURCES "src/*.cpp" "UI/src/*.cpp" "src/*.c")
file(GLOB_RECURSE UI_FILE "UI/src/*.ui")
include_directories(UI/include)
file(GLOB_RECURSE include_FILE "UI/include/*.h")

# 将UI文件转换为头文件
#qt5_wrap_ui(UI_HEADERS ${UI_FILE})

# 添加可执行文件并链接Qt5模块
add_executable(openglqt ${SOURCES}   ${UI_FILE} ${include_FILE}

)
# 声明资源文件
qt5_add_resources(MY_RESOURCES resources.qrc)
target_link_libraries(openglqt Qt5::Widgets ${OPENGL_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
# 将生成的资源文件与目标链接
target_sources(openglqt PRIVATE ${MY_RESOURCES})
