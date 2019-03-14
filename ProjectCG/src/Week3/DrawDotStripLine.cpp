#include <gl/glut.h>
#include <gl/GL.h>
#include <stdlib.h>

void myInit()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f, 0.f, 0.f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void drawLine()
{
	glLineStipple(4, 0x1C47);
	//glLineStipple(4, 0xFF5F);
	glLineWidth(2.0f);
	glEnable(GL_LINE_STIPPLE);
	glBegin(GL_LINES);
		glVertex2i(50,50);
		glVertex2i(500, 50);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawLine();
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
	glutInitWindowPosition(500, 500);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Example 3.3");
	myInit();
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(myKeyboard);
	glutMainLoop();
	return 0;
}