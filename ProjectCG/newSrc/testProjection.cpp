//#include "Windows.h"
//#include <gl/GL.h>
//#include <gl/glut.h>
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	//glOrtho(-1.5 * (4 / 3), 1.5* (4 / 3), -1.5, 1.5, 1, 10);
//	gluPerspective(45, 4 / 3, 1, 20);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0, 3, 10, 0, 0, 0, 0, 1, 0);
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.0f, 0.f);
//	//glEnable(GL_CULL_FACE);
//	//glCullFace(GL_BACK);
//	//glutSolidCube(4.0);
//	//glDisable(GL_CULL_FACE);
//	//glEnable(GL_DEPTH_TEST);
//	//	glutSolidCube(4.0);
//	//glDisable(GL_DEPTH_TEST);
//	glFlush();
//}
//
//void myKeyboard(unsigned char c, int x, int y)
//{
//
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(800, 600);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//	glutCreateWindow("Test");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
//	return 1;
//}