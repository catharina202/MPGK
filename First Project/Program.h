#pragma once

#include <string.h>
#include <math.h>
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <vector>

class ProgramMPGK
{
private:
	int wysokoscOkna;
	int szerokoscOkna;
	int polozenieOknaX;
	int polozenieOknaY;
	static GLuint VAO;
	static GLuint VBO;
	static GLuint IBO;
	static GLuint programZShaderami;
	static GLuint vertexShaderId;
	static GLuint fragmentShaderId;
	static GLint zmiennaShader;

public:
	ProgramMPGK(void);
	ProgramMPGK(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY);
	~ProgramMPGK(void);
	void stworzenieOkna(int argc, char** argv);
	void inicjalizacjaGlew();
	static void wyswietl();
	static void usun();
	void stworzenieVAO();
	void stworzenieVBO();
	void stworzenieIBO();
	void stworzenieProgramu();
	GLuint dodanieDoProgramu(GLuint programZShaderami, const char * tekstShadera, GLenum typShadera);
	void sprawdzenieWersji();
};