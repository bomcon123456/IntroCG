//#include "Windows.h"
//
//#include <gl/GL.h>
//#include <gl/glut.h>
//#include <iostream>
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//		glColor3f(1.f, 0.0f, 0.f);
//		glMatrixMode(GL_PROJECTION);
//		glLoadIdentity();
//		gluPerspective(45.0, 1.333, 10, 5000);
//	
//		glMatrixMode(GL_MODELVIEW);
//		glLoadIdentity();
//		gluLookAt(8, 10, 7, 0, 0, 0, 0, 1, 0);
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	//glColor3f(1.f, 0.f, 0.f);
//	//gluLookAt(2.0, 2.0, 4.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
// //   glutWireCube(1.0);
//
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(800, 600);
//	glutInitWindowPosition(200, 200);
//	glutCreateWindow("Example 5.3");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//	return 0;
//}
