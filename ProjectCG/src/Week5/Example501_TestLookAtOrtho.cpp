//#include <Windows.h>
//#include <gl/gl.h>
//#include <gl/glut.h>
//#include <iostream>
//
//float mx = 25.f, my = 25.f, mz = 50.f;
//int u, r, f;
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-400.0, 400.0, -300.0, 300.0, -1000.0, 1000.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(mx, my, mz, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//}
//
//void myKeyboard(unsigned char key, int k, int i)
//{
//	switch (key)
//	{
//		case 'z':
//		{
//
//			mx += 5.f;
//			break;
//		}
//		case 'x':
//		{
//					my += 5.f;
//					break;
//		}
//		case 'c':
//		{
//					mz += 5.f;
//					break;
//		}
//		case 'a':
//		{
//
//					mx -= 5.f;
//					break;
//		}
//		case 's':
//		{
//					my -= 5.f;
//					break;
//		}
//		case 'd':
//		{
//					mz -= 5.f;
//					break;
//		}
//		case 'j':
//		{
//					u = 1.0f;
//					r = 0.0f;
//					f = 0.0f;
//					break;
//		}
//		case 'k':
//		{
//					u = 0.0f;
//					r = 1.0f;
//					f = 0.0f;
//					break;
//		}
//		case 'l':
//		{
//					u = 0.0f;
//					r = 0.0f;
//					f = 1.0f;
//					break;
//		}
//		default:
//		{
//				   break;
//		}
//	}
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	std::cout << mx << " " << my << " " << mz << std::endl;
//	gluLookAt(mx, my, mz, 0.0, 0.0, 0.0, u, r ,f);
//	glColor3f(1.f, 0.f, 0.f);
//	glPushMatrix();
//	glScaled(1.0, 2.0, 1.0);
//	glutWireCube(100);
//	glPopMatrix();
//	glColor3f(0.f, 1.f, 1.f);
//	glPointSize(5.f);
//	glBegin(GL_POINTS);
//	glVertex3f(0.f, 0.f, 0.f);
//	glEnd();
//	glFlush();
//
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//	glutInitWindowSize(800, 600);
//	glutInitWindowPosition(200, 200);
//	int myWindow = glutCreateWindow("OpenGL");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}