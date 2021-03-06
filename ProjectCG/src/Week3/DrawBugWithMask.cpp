#include <gl/glut.h>
#include <gl/GLU.h>
#include <gl/GL.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

void myInit()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void drawBug()
{
	GLubyte mask[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x03, 0x80, 0x01, 0xC0, 0x06, 0xC0, 0x03, 0x60,
		0x04, 0x60, 0x06, 0x20, 0x04, 0x30, 0x0C, 0x20,
		0x04, 0x18, 0x18, 0x20, 0x04, 0x0C, 0x30, 0x20,
		0x04, 0x06, 0x60, 0x20, 0x44, 0x03, 0xC0, 0x22,
		0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
		0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
		0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
		0x66, 0x01, 0x80, 0x66, 0x33, 0x01, 0x80, 0xCC,
		0x19, 0x81, 0x81, 0x98, 0x0C, 0xC1, 0x83, 0x30,
		0x07, 0xe1, 0x87, 0xe0, 0x03, 0x3f, 0xfc, 0xc0,
		0x03, 0x31, 0x8c, 0xc0, 0x03, 0x33, 0xcc, 0xc0,
		0x06, 0x64, 0x26, 0x60, 0x0c, 0xcc, 0x33, 0x30,
		0x18, 0xcc, 0x33, 0x18, 0x10, 0xc4, 0x23, 0x08,
		0x10, 0x63, 0xC6, 0x08, 0x10, 0x30, 0x0c, 0x08,
		0x10, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x08 };
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(mask);
	glColor3f(1.f, 0.f, 0.f);
	glBegin(GL_POLYGON);
		glVertex2i(40, 40);
		glVertex2i(220, 40);
		glVertex2i(220, 200);
		glVertex2i(130, 270);
		glVertex2i(40, 220);
	glEnd(); 
}

void myDisplay()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	drawBug();
	glutSwapBuffers();
	glFlush();
}


void myKeyboard(unsigned char c, int x, int y)
{
	switch (c)
	{
 	case 'q':
		exit(0);
		break;
	default:
		break;
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 50);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Example 3.2");
	myInit();
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
	return 0;
}