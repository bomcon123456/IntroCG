//#include "Windows.h"
//#include "gl/glut.h"
//#include "gl/GL.h"
//#include <stdio.h>
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	//gluPerspective(45, 1.3333, 1, 10);
//	glOrtho(-1.5f * 1.3333 , 1.5 * 1.3333, -1.5 , 1.5, 1, 10);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
//}
//
//void myDisplay()
//{
//	printf("Redrawed.\n");
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glutSolidCube(2.0);
//	glFlush();
//}
//
//void myKeyboard(unsigned char c, int x, int y)
//{
//	switch (c)
//	{
//	case 'a':
//		glutPostRedisplay();
//		break;
//	default:
//		printf("LOL");
//		break;
//	}
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	if ((b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN))
//	{
//	}
//	else if ((b == GLUT_RIGHT_BUTTON) && (s == GLUT_DOWN))
//	{
//	}
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(800, 600);
//	glutCreateWindow("Template");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
//	return 1;
//}