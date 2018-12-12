//#include <windows.h>
//#include <math.h>
//#include <gl/glut.h>
//#include <gl/GL.h>
//#include <stdio.h>
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glFlush();
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	int maxY;
//	maxY = glutGet(GLUT_WINDOW_HEIGHT);
//	y = maxY - y;
//
//	glColor3f(1.0f, 0.0f, 0.0f);
//	if ((b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN))
//	{
//		printf("%d, %d",x,y);
//		glBegin(GL_POINTS);
//		glVertex2i(x, y);
//		glEnd();
//	}
//	glFlush();
//}
//
//void myInit(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glPointSize(4.0f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//
//}
//
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(640, 480);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow("Example 4");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
//}