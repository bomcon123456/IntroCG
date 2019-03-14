#pragma once
#include <gl/glut.h>
#include <gl/gl.h>
#include <windows.h>
int x = 320, y = 240;
int goc = 5.;
int sleep = 0;
void myInit(void) {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	glMatrixMode(GL_MODELVIEW);
}
void myDisplay(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(x - 100, y - 100, x + 100, y + 100);
	glFlush();
}

void xoay1(){
	Sleep(sleep);
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(x, y, 0.); // apply translation (T)
	glRotatef(goc, 0., 0., 1.); // apply rotation (R)
	glTranslatef(-x, -y, 0.); // apply translation (T)
	glRectf(x - 100, y - 100, x + 100, y + 100); // draw rectangle at the origin
}

void xoay2(){
	Sleep(sleep);
	glClear(GL_COLOR_BUFFER_BIT);
	glTranslatef(x, y, 0.); // apply translation (T)
	glRotatef(-goc, 0., 0., 1.); // apply rotation (R)
	glTranslatef(-x, -y, 0.); // apply translation (T)
	glRectf(x - 100, y - 100, x + 100, y + 100); // draw rectangle at the origin
}

void myMouse(int b, int s, int x, int y)
{
	switch (b)
	{ 
	case GLUT_LEFT_BUTTON:
		if (s == GLUT_DOWN){
			glutIdleFunc(xoay1);
		}
		break;
	case GLUT_RIGHT_BUTTON:
		if (s == GLUT_DOWN) {
			glutIdleFunc(xoay2);
		}
		break;
	default: break;
	}
}

void run(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Bài 4.2");
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	myInit();
	glutMainLoop();
}