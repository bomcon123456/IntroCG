//#include <Windows.h>
//#include <gl/GL.h>
//#include <gl/glut.h>
//#include <stdio.h>
//
//bool InitMouse = true;
//int angle = 0;
//int time = 0;
//int a;
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	glLoadIdentity();
//	glMatrixMode(GL_PROJECTION);
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//	glMatrixMode(GL_MODELVIEW);
//}
//
//void Rotate()
//{
//	time++;
//	if (time % 800000 == 0)
//	{
//		int x = 300, y = 200;
//		glClear(GL_COLOR_BUFFER_BIT);
//		glPushMatrix();
//		glTranslatef(x, y, 0);
//		glRotatef(angle, 0, 0, 1);
//		glTranslatef(-x, -y, 0);
//		glRectf(200, 100, 400, 300);
//		glPopMatrix();
//		angle += 5;
//		glFlush();
//	}
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	if (InitMouse)
//		glRectf(200, 100, 400, 300);
//	glFlush();
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	printf("aaaa");
//
//	switch (b)
//	{
//	case GLUT_LEFT_BUTTON:
//	{
//		if (s == GLUT_DOWN)
//			glutIdleFunc(Rotate);
//		break;
//	}
//	case GLUT_RIGHT_BUTTON:
//	{
//		if (s == GLUT_DOWN)
//		{
//			glutIdleFunc(NULL);
//		}
//		break;
//	}
//	}
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Exercise 4.1");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutMainLoop();
//}