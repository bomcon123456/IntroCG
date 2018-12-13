//#include <gl/glut.h>
//#include <gl/GL.h>
//
//
//struct PointInt
//{
//	int x, y;
//};
//
//void drawPoint(int x, int y)
//{
//	glBegin(GL_POINTS);
//		glVertex2i(x, y);
//	glEnd();
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
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	MidPointAlgo(100, 20, 500, 400);
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
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(500, 500);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 2.2");
//	glutReshapeFunc(myReshape);
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}