//#include <gl/glut.h>
//#include <gl/GL.h>
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//	glMatrixMode(GL_MODELVIEW);
//}
//
//void myDisplay()
//{
//	int x = 320, y = 240;
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	glRectf(x - 100, y - 100, x + 100, y + 100);
//	glColor3f(1.0f, 1.0f, 0.0f);
//
//	glPushMatrix();
//	glRotatef(20.0f, 0, 0, 1);
//	glRectf(x - 100, y - 100, x + 100, y + 100);
//	glPopMatrix();
//	glFlush();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 4.1");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}