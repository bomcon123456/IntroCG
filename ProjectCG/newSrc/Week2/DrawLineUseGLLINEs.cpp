//#include <Windows.h>
//#include <math.h>
//#include <gl/glut.h>
//#include <gl/GL.h>
//
//const int scrH = 480;
//const int scrW = 640;
//int bIsStarted = 1;	
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
//	glBegin(GL_LINES);
//		glVertex2i(x0, y0);
//		glVertex2i(x1, y1);
//	glEnd();
//	glFlush();
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	static PointInt list[2];
//	if (bIsStarted)
//	{
//		list[0].x = x;
//		list[0].y = y;
//		bIsStarted = 0;
//	}
//
//	if ( (b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN))
//	{
//		list[1].x = x;
//		list[1].y = y;
//		drawLine(list[0].x, flipY(list[0].y), list[1].x, flipY(list[1].y));
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
//	glPointSize(4.0f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//}
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glFlush();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(500, 500);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 2.3");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
//}