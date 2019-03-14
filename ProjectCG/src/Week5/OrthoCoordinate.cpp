#include <Windows.h>
#include <gl/gl.h>
#include <gl/glut.h>
#include <iostream>
void myInit()
{
	glClearColor(1.f, 1.f, 1.f, 1.f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.f, 0.f, 0.f);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,800.0,0.0,600.0);
	glMatrixMode(GL_MODELVIEW);
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glVertex2f(400.f, 600.f);
		glVertex2f(200.f, 100.0f);
		glVertex2f(600.f, 100.f);
		//glVertex2f(0.f, 1.f);
		//glVertex2f(-0.5f, 0.0f);
		//glVertex2f(0.5f, 0.0f);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(200, 200);
	int myWindow = glutCreateWindow("OpenGL");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
}