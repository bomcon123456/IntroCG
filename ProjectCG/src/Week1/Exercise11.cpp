//#include <gl/glut.h>
//#include <gl/GL.h>
//#include <string>
//
//float r, g, b;
//int button, state;
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glFlush();
//}
//
//void myMouse(int b, int s, int x, int y)
//{
//	state = (b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN);
//}
//
//void myInit(void)
//{
//	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glPointSize(4.0f);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0f, 640.0f, 0.0f, 480.0f);
//}
//
//void receiveColorInput(int argc, char** argv)
//{
//	if (argc == 4)
//	{
//		r = std::stof(argv[1]);
//		g = std::stof(argv[2]);
//		b = std::stof(argv[3]);
//	}
//}
//
//void myMotionFunc(int x, int y)
//{
//	if (state)
//	{
//	int maxY = glutGet(GLUT_WINDOW_HEIGHT);
//	y = maxY - y;
//	glColor3f(r, g, b);
//		glBegin(GL_POINTS);
//		glVertex2i(x, y);
//		glEnd();
//	glFlush();
//	}
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	receiveColorInput(argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(500, 500);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Exercise 1.1");
//	glutDisplayFunc(myDisplay);
//	glutMouseFunc(myMouse);
//	glutMotionFunc(myMotionFunc);
//	myInit();
//	glutMainLoop();
//
//	return 1;
//}