//#include <windows.h>
//#include <math.h>
//#include <gl/GL.h>
//#include <gl/glut.h>
//
//#define PI 3.14
//
//struct PointInt
//{
//	int x, y;
//	PointInt(int a, int b) : x(a), y(b){}
//};
//
//void drawPoint(PointInt a)
//{
//	glBegin(GL_POINTS);
//		glVertex2i(a.x, a.y);
//	glEnd();
//}
//
//void drawLine(PointInt a, PointInt b)
//{
//	glBegin(GL_LINES);
//		glVertex2i(a.x, a.y);
//		glVertex2i(b.x, b.y);
//	glEnd();
//}
//
//void drawCircle(PointInt a, float r)
//{
//	float saveX, saveY;
//	const int n = 50;
//	float angle = 0;
//	float angleIncr = 360 * PI / (180 * n);
//	saveX = a.x;
//	saveY = a.y;
//	for (int k = 0; k <= n; k++, angle += angleIncr)
//	{
//		int x = a.x + r*cos(angle);
//		int y = a.y + r*sin(angle);
//		drawLine(PointInt(saveX, saveY), PointInt(x, y));
//		saveX = x;
//		saveY = y;
//	}
//}
//
//void myDisplay(void)
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0f, 0.0f, 0.f);
//	drawLine(PointInt(100,150), PointInt(500, 200));
//	glColor3f(0.f, 1.f, 0.f);
//	PointInt p = PointInt(300, 200);
//	drawCircle(p, 100.f);
//	glFlush();
//}
//
//void myReshape(int w, int h)
//{
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//	glMatrixMode(GL_MODELVIEW);
//	glutPostRedisplay();
//}
//
//int main(int argc, char ** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowPosition(500, 500);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 2.1");
//	glutReshapeFunc(myReshape);
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}