#pragma once
#include <gl/glut.h>
#include <gl/gl.h>
#include <windows.h>
int sleep = 10;

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-3.2, 3.2, -2.4, 2.4, 1, 50);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(8, 10, 7, 0, 0, 0, 1, 0, 0);
}
void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 1.0f);
	glutWireCube(1);
	glFlush();
}
void xoayX(float goc){
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(goc, 1., 0., 0.);
	glutWireCube(1); // Ve lap phuong
}
void xoayY(float goc){
	glClear(GL_COLOR_BUFFER_BIT);
	glRotatef(goc, 0., 1., 0.);
	glutWireCube(1); // Ve lap phuong
}
void keyEven(unsigned char key, int x, int y){
	float goc = 10.;
	switch (key){
	case 'a':{
		xoayX(-goc);
	}
		break;

	case 'd':{
		xoayX(+goc);
	}
	case 'w':{
		xoayY(-goc);
	}
		break;

	case 's':{
		xoayY(+goc);
	}
		break;
	case 27:{
		exit(0);
	}
		break;

	default:
		break;
	}
}
void run(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Thi du 5.1");
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(keyEven);
	myInit();
	glutMainLoop();
}