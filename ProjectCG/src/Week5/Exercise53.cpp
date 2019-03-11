//#include <Windows.h>
//
//#include <GL/gl.h>
//#include <GL/glut.h>
//#include <iostream>
//
//int shoulder = 0, elbow = 0;
//
//void myInit(void)
//{
//	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//
//	glViewport(0, 0, 800, 600);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(65.0, 1.33333, 1.0, 20.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glTranslatef(0.0, 0.0, -5.0);
//}
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 1.f);
//	glViewport(0, 0, 400, 300);
//	glPushMatrix();
//
//		glTranslatef(-1.0, 0.0, 0.0);
//		glRotatef(shoulder, 0.0, 0.0, 1.0);
//		glTranslatef(1.0, 0.0, 0.0);
//
//		glPushMatrix();
//			glScalef(3.0, 0.5, 1.0);
//			glutWireCube(1.0);
//		glPopMatrix();
//
//		glTranslatef(1.0, 0.0, 0.0);
//		glRotatef(elbow, 0.0, 0.0, 1.0);
//		glTranslatef(1.5, 0.0, 0.0);
//
//		glPushMatrix();
//			glScalef(3.0, 0.5, 1.0);
//			glutWireCube(1.0);
//		glPopMatrix();
//
//	glPopMatrix();
//	
//	glPointSize(10.f);
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glBegin(GL_POINTS);
//		glVertex2d(0.0, 0.0);
//	glEnd();
//	glutSwapBuffers();
//}
//
//void myKeyboard(unsigned char key, int x, int y)
//{
//	switch (key)
//	{
//	case 's':
//	{
//		shoulder = (shoulder + 3) % 360;
//		glutPostRedisplay();
//		break;
//	}
//	case 'e':
//	{
//		elbow = (elbow + 3) % 360;
//		glutPostRedisplay();
//		break;
//	}
//	default:
//		break;
//	}
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(800, 600);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow("Exercise 5.3");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//	return 0;
//}