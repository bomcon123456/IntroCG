//#include "gl/glut.h"
//#include "gl/GL.h"
//#include <stdio.h>
//
//// Cube coordinate.
//int a[3] = { 1.0,0.0,0.0 }, b[3] = { 0.0,0.0,-1.0 }, c[3] = { -1.0,0.0,1.0 }, d[3] = { 0.0,0.0,1.0 },
//e[3] = { 0.0,1.0,0.0 };
//
//int angle_x = 0, angle_y = 0, angle_z = 0;
//
//void drawPyramid()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, .0, 0.0);
//	glMatrixMode(GL_MODELVIEW);
//	glRotatef(angle_z, 0.0, 0.0, 1.0);
//	glRotatef(angle_y, 0.0, 1.0, 0.0);
//	glRotatef(angle_x, 1.0, 0.0, 0.0);
//	glBegin(GL_POLYGON);
//		
//	glEnd();
//	glColor3f(0.0, 1.0, .0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(e);
//		glVertex3iv(d);
//		glVertex3iv(c);
//	glEnd();
//	glColor3f(0.0, 0.0, 1.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(e);
//		glVertex3iv(c);
//		glVertex3iv(b);
//	glEnd();
//	glColor3f(1.0, 1.0, 0.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(e);
//		glVertex3iv(b);
//		glVertex3iv(a);
//	glEnd();
//	glColor3f(1.0, .0, 1.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(e);
//		glVertex3iv(a);
//		glVertex3iv(d);
//	glEnd();
//	glColor3f(0.0, 1.0, 1.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(d);
//		glVertex3iv(c);
//		glVertex3iv(b);
//		glVertex3iv(a);
//	glEnd();
//	glFlush();
//	}
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45, 1.3333, 1, 10);
//	glMatrixMode(GL_MODELVIEW);
//	glEnable(GL_DEPTH_TEST);
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
//	//glEnable(GL_CULL_FACE);
//	//glCullFace(GL_BACK);
//	drawPyramid();
//	//glDisable(GL_CULL_FACE);
//	printf("hey");
//}
//
//void myKeyboard(unsigned char c, int x, int y)
//{
//	switch (c)
//	{
//	case 'x':
//		angle_x = (angle_x + 5) % 360;
//		break;
//	case 'y':
//		angle_y = (angle_y + 5) % 360;
//		break;
//	case 'z':
//		angle_z = (angle_z + 5) % 360;
//		break;
//	default:
//		printf("LOL");
//		break;
//	}
//	glutPostRedisplay();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(800, 600);
//	glutCreateWindow("Example 7.1");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//	return 1;
//}