#include <Windows.h>

#include <GL/gl.h>
#include <gl/glut.h>
#include <iostream>

float mx = 0, my = 0, mz = 0;

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
	gluLookAt(8, 10, 7, 0, 0, 0, 0, 1, 0);
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glScaled(1.0, 2.0, 1.0);
	glutWireCube(2);
	glPopMatrix();
	glFlush();
}

void myKeyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'z':
	{
		mx += 5.f;
		break;
	}
	case 'x':
	{
		my += 5.f;
		break;
	}
	case 'c':
	{
		mz += 5.f;
		break;
	}
	case 'a':
	{
		mx -= 5.f;
		break;
	}
	case 's':
	{
		my -= 5.f;
		break;
	}
	case 'd':
	{
		mz -= 5.f;
		break;
	}
	default:
		break;
	}
	std::cout << "x= " << mx << "y=" << my << "z=" << mz << std::endl;
	glClear(GL_COLOR_BUFFER_BIT);

	glFlush();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(mx, my, mz, 0, 0, 0, 0, 1, 0);
	glutPostRedisplay();
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