#pragma once
#include <gl/glut.h>
#include <gl/gl.h>
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}
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
	glPushMatrix();
	glRotatef(120, 0.0, 1.0, 0.0);
	glScalef(2, 0.5, 0.5);
	glutWireCube(1); // Ve lap phuong
	glPushMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(10, 0.0, 1.0, 0.0);
	glutWireCube(1); // Ve lap phuong
	glPopMatrix();
	glFlush();
}
void run(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Thi du 5.1");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}