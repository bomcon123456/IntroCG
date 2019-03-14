#pragma once
#include <windows.h> 
#include <math.h> 
#include <gl/glut.h> 
#include <gl/gl.h>  

void myDisplay(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void myMouse(int x, int y) {
	int yy;
	yy = glutGet(GLUT_WINDOW_HEIGHT);
	y = yy - y;
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void myInit(){
	glClearColor(0.0, 0.0, 0.0, 0.0); // chọn mầu cho màn hình
	glColor3f(1.0f, 1.0f, 1.0f); // chọn mầu cho điểm
	glPointSize(2.0); // chọn kích thước cho điểm
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void run(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Thi du 1.4");
	glutDisplayFunc(myDisplay);
	glutMotionFunc(myMouse);
	myInit();
	glutMainLoop();
}