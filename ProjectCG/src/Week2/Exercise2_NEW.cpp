<<<<<<< HEAD:ProjectCG/src/Week2/Exercise2_NEW.cpp
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <gl/glut.h>
#include <gl/GL.h>

bool bHasStarted = 0;
const int scrH = 480;

void swap(int&a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}

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
	// Initialize
	// m: constant slope
	bool steep = false;
	int deltaX, deltaY, curX, curY;
	int deltaNE, deltaE;

	int absDeltaX = abs(x1 - x0);
	int absDeltaY = abs(y1 - y0);

	if (absDeltaX < absDeltaY)
	{
		swap(x0, y0);
		swap(x1, y1);
		steep = true;
	}
	if (x0>x1)
	{
		swap(x0, x1);
		swap(y0, y1);
	}
	deltaX = x1 - x0;
	deltaY = y1 - y0;
	deltaE = 2 * deltaY;
	deltaNE = 2 * (deltaY - deltaX);
	curX = x0; curY = y0;
	int d = 2 * deltaY - deltaX;
	drawPoint(x0, y0);
	while (curX <= x1)
	{
		if (d <= 0)
		{
			d += deltaE;
			curX++;
		}
		else
		{
			d += deltaNE;
			curX++;
			curY++;
		}
		if (steep)
		{
			drawPoint(curY, curX);
		}
		else
		{
			drawPoint(curX, curY);
		}
	}

	//float m = deltaY / deltaX;
	//if (m == 0 || m == 1)
	//{
	//	// Doesn't need bresenham (horizontal / diagonal)
	//}
	//if (m > -1 && m < 0)
	//{
	//	// flip about x-axis
	//}
	//else if (m>1)
	//{
	//	// flip about diagonal line (y=x);

	//}
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

/* Old Midpoint Algorithm*/
//int dx, dy, incrE, incrNE, d, x, y;
//dx = x1 - x0;
//dy = y1 - y0;
//d = 2 * dy - dx;
//incrE = 2 * dy;
//incrNE = 2 * (dy - dx);
//x = x0; y = y0;
//drawPoint(x, y);
//while (x < x1)
//{
//	if (d <= 0)	// select E
//	{
//		d += incrE;
//		x++;
//	}
//	else
//	{
//		d += incrNE;
//		x++;
//		y++;
//	}
//	drawPoint(x, y);
=======
//#include <Windows.h>
//#include <math.h>
//#include <stdio.h>
//#include <gl/glut.h>
//#include <gl/GL.h>
//
//bool bHasStarted = 0;
//const int scrH = 480;
//
//int flip(int y)
//{
//	return scrH - y;
//}
//
//struct PointInt
//{
//	int x; int y;
//};
//
//void drawPoint(int x, int y)
//{
//	glBegin(GL_POINTS);
//		glVertex2i(x, y);
//	glEnd();
//	glFlush();
//}
//
//void MidPointAlgo(int x0, int y0, int x1, int y1)
//{
//	int dx, dy, incrE, incrNE, d, x, y;
//	dx = x1 - x0;
//	dy = y1 - y0;
//	d = 2 * dy - dx;
//	incrE = 2 * dy;
//	incrNE = 2 * (dy - dx);
//	x = x0; y = y0;
//	drawPoint(x, y);
//	while (x < x1)
//	{
//		if (d <= 0)	// select E
//		{
//			d += incrE;
//			x++;
//		}
//		else
//		{
//			d += incrNE;
//			x++;
//			y++;
//		}
//		drawPoint(x, y);
//	}
//}
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	//MidPointAlgo(100, 20, 500, 400);
//	glFlush();
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	static PointInt list[2];
//	if (!bHasStarted)
//	{
//		list[0].x = x;
//		list[0].y = y;
//		bHasStarted = 1;
//	}
//	if ((b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN))
//	{
//		printf("%d, %d -> %d, %d ", list[0].x ,list[0].y, x, y);
//		list[1].x = x;
//		list[1].y = y;
//		MidPointAlgo(list[0].x, flip(list[0].y), list[1].x, flip(list[1].y));
//		//MidPointAlgo(100, 20, 500, 400);
//		list[0].x = list[1].x;
//		list[0].y = list[1].y;
//	}
//}
//
//void myInit(void)
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(500, 500);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Exercise 2.2");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
>>>>>>> ee3f88687ba7ebb1098992b12af1f6ca3421645c:ProjectCG/src/Week2/Exercise2.cpp
//}