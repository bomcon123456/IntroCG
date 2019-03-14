#pragma once

#include <windows.h>
#include <math.h>
#include <gl/glut.h> 
#include <gl/gl.h>  

#define PI 3.14159265  

class GLintPoint {
public:
	GLint x, y;
};
void drawPoint(GLint x, GLint y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}

void circlePoints(GLint x, GLint y){
	drawPoint(x, y);
	drawPoint(y, x);
	drawPoint(y, -x);
	drawPoint(x, -y);
	drawPoint(-x, -y);
	drawPoint(-y, -x);
	drawPoint(-y, x);
	drawPoint(-x, y);
}

void drawCircle(GLintPoint point, float radius) {
	GLint x, y;
	float d;
	x = 0 + point.x;
	y = radius + point.y;
	d = 1 - radius;
	circlePoints(x, y);
	while (y>x)
	{
		if (d < 0) {
			d = d + 2 * x + 3;
			x = x + 1;
		}
		else {
			d = d + 2 * (x - y) + 5;
			x = x + 1;
			y = y - 1;
		}
		circlePoints(x, y);
	}
}

void myDisplay(void) {
	glClearColor(1., 1., 1., 1.);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1., 0., 0.);
	glColor3f(0., 0., 1.);
	GLintPoint point;
	point.x = 0;
	point.y = 0;
	glPointSize(12.0);
	drawCircle(point, 100.0);
	glFlush();
}
void myReshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}
void run(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 150);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Thi du 2.1");
	glutReshapeFunc(myReshape);
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}