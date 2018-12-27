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
//	float x = 300.f, y = 200.f;
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	glRectf(200, 100, 400, 300);
//	glColor3f(1.0f, 1.0f, 0.0f);
//
//	glPushMatrix();
//	glTranslatef(x, y, 0.f);
//	glRotatef(30.0f, 0, 0, 1);
//	glTranslatef(-x, -y, 0.f);
//	glRectf(200, 100, 400, 300);
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