
#ifndef ASSIGNMENT2_SP_H
#define ASSIGNMENT2_SP_H
//#include "OpenGL.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>


//Modified to do it for both Windows and non-windows.
#ifdef _WIN32
#include <GL/glew.h>
#else
#define GLFW_INCLUDE_GLCOREARB
#define GL_GLEXT_PROTOTYPES
#endif
//Include glfw
#include <GLFW/glfw3.h>
#include "glm/mat4x4.hpp"
#include "glm/gtc/type_ptr.hpp"

using namespace std;
//using namespace glm;

class ShaderProgram
{
public:
//private:
	GLint id = -1;
//public:
	ShaderProgram();
	~ShaderProgram();
	bool attachShader(string fileName, GLenum type);
	bool link();
	bool setInt(string variable, GLint value);
	bool setFloat(string variable, GLfloat value);
	bool setVec2(string variable, GLfloat value1, GLfloat value2);
	bool setMat4(string variable, glm::mat4 mat);
	bool bind();
	static void unbind();
};

#endif //ASSIGNMENT2_SP_H
