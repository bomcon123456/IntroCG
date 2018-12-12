//#include <stdlib.h>
//#include <gl/glut.h>
//#include <gl/GL.h>
//#include <stdio.h>
//
//void myDisplay(void)
//{
//	glClearColor(0.7f, 0.1f, 0.9f, 1.0f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glutSwapBuffers();
//	//glFlush();
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	switch (b)
//	{
//	case GLUT_LEFT_BUTTON:
//		if (s == GLUT_DOWN)
//		{
//			printf("\nLeft button pressed!");
//		}
//		else if (s == GLUT_UP)
//		{
//			printf("\nLeft button released!");
//		}
//		break;
//	case GLUT_RIGHT_BUTTON:
//		if (s == GLUT_DOWN)
//		{
//			printf("\nRight button pressed!");
//		}
//		else if (s == GLUT_UP)
//		{
//			printf("\nRight button released!");
//		}
//		break;
//	default: break;
//	}
//}
//
//void myKeyboard(unsigned char c, int x, int y)
//{
//	switch (c)
//	{
//	case 'q':
//		exit(0);
//	default:
//		printf("\nKey %c is hit", c);
//		break;
//	}
//}
//
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
//	glutInitWindowPosition(300, 200);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 2");
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}