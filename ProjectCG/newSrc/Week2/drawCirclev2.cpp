//#include <Windows.h>
//#include <math.h>
//#include <gl/glut.h>
//#include <gl/GL.h>
//
//const int scrH = 480;
//int mX = 500, mY = 100;
//
//int flipY(int y)
//{
//	return scrH - y;
//}
//
//struct PointInt
//{
//	int x, y;
//};
//
//void drawLine(int x0, int y0, int x1, int y1)
//{
//	glBegin(GL_POINTS);
//		glVertex2i(x0, y0);
//		glVertex2i(x1, y1);
//	glEnd();
//}
//
//void putCirclePoint(int x,int y)
//{
//	//y = flipY(y);
//	glBegin(GL_POINTS);
//		glVertex2i(mX + x, mY + y);
//		glVertex2i(mX + y, mY + x);
//		glVertex2i(mX - y, mY + x);
//		glVertex2i(mX - x, mY + y);
//		glVertex2i(mX - x, mY - y);
//		glVertex2i(mX - y, mY - x);
//		glVertex2i(mX + y, mY - x);
//		glVertex2i(mX + x, mY - y);
//	glEnd();
//}
//
//void drawCircle(float r)
//{
//	int x, y;
//	float d;
//	x = 0;
//	y = r;
//	d = 1 - r;
//	putCirclePoint(x, y);
//	while (y > x)
//	{
//		if (d < 0)
//		{
//			d = d + 2 * x + 3;
//			x++;
//		}
//		else
//		{
//			d = d + 2 * (x - y) + 5;
//			x++;
//			y--;
//		}
//		putCirclePoint(x,y);
//	}
//}
//
//void myDisplay(void)
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	drawCircle(30.f);
//	glFlush();
//};
//
//void myInit(void)
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0f, 0.0f, 0.0f);
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
//	glutCreateWindow("Exercise 2.1");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}