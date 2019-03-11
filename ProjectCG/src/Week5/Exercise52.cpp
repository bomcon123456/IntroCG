//#include <Windows.h>
//
//#include <GL/gl.h>
//#include <gl/glut.h>
//#include <iostream>
//
//float fov = 30.0f;
//
//void myInit()
//{
//	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glColor3f(1.f, 0.0f, 0.f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(20, 1.333, 10, 50);
//
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(7, 6, 15, 0, 0, 0, 0, 1, 0);
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPushMatrix();
//	glScaled(1.0, 2.0, 1.0);
//	glutWireCube(2);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslated(5.0, 0.0, 0.0);
//	glScaled(2.0, 1.0, 1.0);
//	glutWireCube(2);
//	glPopMatrix();
//	glFlush();
//}
//
//void myMouse(int button, int state, int x, int y)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
//	{
//		fov += 5.f;
//	}
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	std::cout << fov << std::endl;
//	gluPerspective(fov, 1.333, 10, 50);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(6, 6, 15, 0, 0, 0, 0, 1, 0);
//	glPushMatrix();
//	glScaled(1.0, 2.0, 1.0);
//	glutWireCube(2);
//	glPopMatrix();
//	glPushMatrix();
//	glTranslated(5.0, 0.0, 0.0);
//	glScaled(2.0, 1.0, 1.0);
//	glutWireCube(2);
//	glPopMatrix();
//	glFlush();
//}
//
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(800, 600);
//	glutInitWindowPosition(200, 200);
//	int myWindow = glutCreateWindow("Example 5.2");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
//}