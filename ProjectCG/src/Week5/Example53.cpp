//#include "Windows.h"
//
//#include <gl/GL.h>
//#include <gl/glut.h>
//#include <iostream>
//
////float vertices[] = {
////	// ground
////	-100.0f, 0.0f, -100.0f,
////	-100.0f, 0.0f, 100.0f,
////	100.0f, 0.0f, 100.0f,
////	100.0f, 0.0f, -100.0f,
////	// cube top ccw
////	-1.0f, 1.0f, -1.0f,	//4
////	-1.0f, 1.0f, 1.0f,	//5
////	1.0f, 1.0f, 1.0f,	//6
////	1.0f, 1.0f, -1.0f,	//7
////	// cube bottom cw
////	-1.0f, -1.0f, -1.0f,	//8
////	-1.0f, -1.0f, 1.0f,	//9
////	1.0f, -1.0f, 1.0f,	//10
////	1.0f, -1.0f, -1.0f,	//11
////};
////
////
////GLuint indices[] = { 4, 8, 5, 9, 6, 10, 7, 11, 10, 9, 11, 8, 7, 4, 6, 5 };
////
////
////GLuint createDL() {
////	GLuint DL;
////
////	// Create the id for the list
////	DL = glGenLists(1);
////
////	// start list
////	glNewList(DL, GL_COMPILE);
////
////	glTranslatef(0.0f, 2.1f, 0.0f);
////	for (int i = -15; i<15; i += 5)
////	for (int j = -10; j<15; j += 5) {
////		glPushMatrix();
////		glTranslatef(i, 0, j);
////		glColor3f(1.0f, 0.0f, 0.0f);
////		glDrawElements(GL_TRIANGLE_STRIP, 8, GL_UNSIGNED_INT, (const void *)indices);
////		glColor3f(0.0f, 1.0f, 0.0f);
////		glDrawElements(GL_TRIANGLE_STRIP, 8, GL_UNSIGNED_INT, (const void *)&(indices[8]));
////		glPopMatrix();
////	}
////
////	// endList
////	glEndList();
////
////	return(DL);
////}
//
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
