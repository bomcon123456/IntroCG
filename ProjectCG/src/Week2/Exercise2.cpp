#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <gl/glut.h>
#include <gl/GL.h>

bool bHasStarted = 0;
const int scrH = 480;

int flip(int y)
{
	return scrH - y;
}

struct PointInt
{
	int x; int y;
};

void drawPoint(int x, int y)
{
	glBegin(GL_POINTS);
		glVertex2i(x, y);
	glEnd();
	glFlush();
}

void MidPointAlgo(int x0, int y0, int x1, int y1)
{
	int dx, dy, incrE, incrNE, d, x, y;
	dx = x1 - x0;
	dy = y1 - y0;
	d = 2 * dy - dx;
	incrE = 2 * dy;
	incrNE = 2 * (dy - dx);
	x = x0; y = y0;
	drawPoint(x, y);
	while (x < x1)
	{
		if (d <= 0)	// select E
		{
			d += incrE;
			x++;
		}
		else
		{
			d += incrNE;
			x++;
			y++;
		}
		drawPoint(x, y);
	}
}

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//MidPointAlgo(100, 20, 500, 400);
	glFlush();
}

void myMouse(int b, int s, int x, int y)
{
	static PointInt list[2];
	if (!bHasStarted)
	{
		list[0].x = x;
		list[0].y = y;
		bHasStarted = 1;
	}
	if ((b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN))
	{
		printf("%d, %d -> %d, %d ", list[0].x ,list[0].y, x, y);
		list[1].x = x;
		list[1].y = y;
		MidPointAlgo(list[0].x, flip(list[0].y), list[1].x, flip(list[1].y));
		//MidPointAlgo(100, 20, 500, 400);
		list[0].x = list[1].x;
		list[0].y = list[1].y;
	}
}

void myInit(void)
{
	glClearColor(1.f, 1.f, 1.f, 1.f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.f, 0.f, 0.f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(500, 500);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Exercise 2.2");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	glutMainLoop();
}