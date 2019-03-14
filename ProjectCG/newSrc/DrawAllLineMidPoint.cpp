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
//int sign(int a)
//{
//	if (a > 0)
//		return 1;
//	if (a == 0)
//		return 0;
//	return -1;
//}
//
//void MidPointAlgo(int Ax, int Ay, int Bx, int By)
//{
//		int	y, x, dy, dx, sx, sy;
//		int	decision, incE, incNE;
//
//		dx = Bx - Ax;
//		dy = By - Ay;
//
//		sx = sign(dx);
//		sy = sign(dy);
//
//		dx = abs(dx);
//		dy = abs(dy);
//
//		if (dy > dx)
//		{
//			incE = 2 * dx;
//			incNE = 2 * dx - 2 * dy;
//			decision = 2 * dx - dy;
//
//			x = Ax;
//			y = Ay;
//			do{
//				drawPoint(x, y);
//				if (decision <= 0)
//					decision += incE;
//				else{
//					decision += incNE;
//					x += sx;
//				}
//				y += sy;
//			} while (y != By);
//		}
//		else{
//			incE = 2 * dy;
//			incNE = 2 * dy - 2 * dx;
//			decision = 2 * dy - dx;
//
//			x = Ax;
//			y = Ay;
//			do{
//				drawPoint(x, y);
//				if (decision <= 0)
//					decision += incE;
//				else{
//					decision += incNE;
//					y += sy;
//				}
//				x += sx;
//			} while (x != Bx);
//		}
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
//}