#include <Windows.h>

#include <GL/gl.h>
#include <gl/glut.h>
#include <iostream>

float angleX = 0.0f, angleY = 0.0f;

void drawCube()
{
	glPushMatrix();
	glRotated(angleX, 1, 0, 0);
	glRotated(angleY, 0, 1, 0);

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_QUADS);
	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);

	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);

	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, -1.0f);

	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);

	glVertex3f(-1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);

	glVertex3f(-1.0f, 1.0f, -1.0f);
	glVertex3f(-1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, -1.0f);
	glEnd();

	glPopMatrix();
}


void myInit()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.f, 0.0f, 0.f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, 1.333, 10, 5000);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(8, 6, 7, 0, 0, 0, 0, 1, 0);
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawCube();
	glFlush();
}

void myKeyboard(unsigned char key, int x, int y)
{
	glClear(GL_COLOR_BUFFER_BIT);
	switch (key)
	{
	case 'x':
	{
				angleX += 5;
				break;
	}
	case 'y':
	{
				angleY += 5;
				break;
	}
	default:
	{
		break;
	}
	}
	drawCube();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(200, 200);
	int myWindow = glutCreateWindow("Example 5.2");
	myInit();
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
}