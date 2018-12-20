//#include <gl/glut.h>
//#include <gl/GL.h>
//#include <stdlib.h>
//
//void myInit()
//{
//	glClearColor(1.0f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glPointSize(12.0f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//}
//
//void drawTris()
//{
//	glBegin(GL_TRIANGLES);
//	glVertex2i(100, 50);
//	glVertex2i(100, 130);
//	glVertex2i(150, 130);
//	glEnd();
//	glFlush();
//}
//
//void drawStippledLine()
//{
//	glEnable(GL_LINE_STIPPLE);
//	glLineStipple(3, 0x00FF);
//	glLineWidth(4.0f);
//	glBegin(GL_LINE_LOOP);
//		glVertex2i(50, 50);
//		glVertex2i(400, 50);
//		glVertex2i(400, 200);
//	glEnd();
//	glDisable(GL_LINE_STIPPLE);
//}
//
//void myDisplay(void)
//{
//	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	drawTris();
//	drawStippledLine();
//	glFlush();
//}
//
//void myKeyboard(unsigned char c, int x, int y)
//{
//	switch (c)
//	{
//	case 'q':
//		exit(0);
//		break;
//	default:
//		break;
//	}
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 3.1");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//	return 1;
//}