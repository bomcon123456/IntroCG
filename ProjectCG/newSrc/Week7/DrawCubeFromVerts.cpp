//#include "gl/glut.h"
//#include "gl/GL.h"
//#include <stdio.h>
//
//// Cube coordinate.
//int a[3] = { 1.0,1.0,1.0 }, b[3] = { 1.0,-1.0,1.0 }, c[3] = { -1.0,-1.0,1.0 }, d[3] = { -1.0,1.0,1.0 },
//e[3] = { 1.0,1.0,-1.0 }, f[3] = { 1.0,-1.0,-1.0 }, g[3] = { -1.0,-1.0,-1.0 }, h[3] = { -1.0,1.0,-1.0 };
//
//int angle_x = 0, angle_y = 0;
//
//void drawCube()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, .0, 0.0);
//	glMatrixMode(GL_MODELVIEW);
//	glRotatef(angle_y, 0.0, 1.0, 0.0);
//	glRotatef(angle_x, 1.0, 0.0, 0.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(a);
//		glVertex3iv(d);
//		glVertex3iv(c);
//		glVertex3iv(b);
//	glEnd();
//	glColor3f(0.0, 1.0, .0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(a);
//		glVertex3iv(b);
//		glVertex3iv(f);
//		glVertex3iv(e);
//	glEnd();
//	glColor3f(0.0, 0.0, 1.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(d);
//		glVertex3iv(h);
//		glVertex3iv(g);
//		glVertex3iv(c);
//	glEnd();
//	glColor3f(1.0, 1.0, 0.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(e);
//		glVertex3iv(f);
//		glVertex3iv(g);
//		glVertex3iv(h);
//	glEnd();
//	glColor3f(1.0, .0, 1.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(e);
//		glVertex3iv(h);
//		glVertex3iv(d);
//		glVertex3iv(a);
//	glEnd();
//	glColor3f(0.0, 1.0, 1.0);
//	glBegin(GL_POLYGON);
//		glVertex3iv(b);
//		glVertex3iv(c);
//		glVertex3iv(g);
//		glVertex3iv(f);
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
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glLoadIdentity();
//	gluLookAt(0, 3, 5, 0, 0, 0, 0, 1, 0);
//	glEnable(GL_CULL_FACE);
//	glCullFace(GL_BACK);
//	drawCube();
//	glDisable(GL_CULL_FACE);
//	printf("hey");
//}
//
//void myKeyboard(unsigned char c, int x, int y)
//{
//	switch (c)
//	{
//	case 'a':
//		angle_y = (angle_y - 5) % 180;
//		break;
//	case 'd':
//		angle_y = (angle_y + 5) % 180;
//		break;
//	case 'w':
//		angle_x = (angle_x + 5) % 180;
//		break;
//	case 's':
//		angle_x = (angle_x - 5) % 180;
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
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(800, 600);
//	glutCreateWindow("Example 7.1");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//	return 1;
//}