#include <gl/glut.h>
#include <gl/GL.h>
#include <string>

float r, g, b;

void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void myMouse(int b, int s, int x, int y)
{
	int maxY = glutGet(GLUT_WINDOW_HEIGHT);
	y = maxY - y;

	glColor3f(r, g, b);
	if ((b == GLUT_LEFT_BUTTON) && (s == GLUT_DOWN))
	{
		printf("%f, %f, %f\n", r, g, b);

		glBegin(GL_POINTS);
			glVertex2i(x, y);
		glEnd();
	}
	glFlush();
}

void myInit(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glPointSize(4.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0f, 640.0f, 0.0f, 480.0f);
}

void receiveColorInput(int argc, char** argv)
{
	if (argc == 4)
	{
		r = std::stof(argv[1]);
		g = std::stof(argv[2]);
		b = std::stof(argv[3]);
	}

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	receiveColorInput(argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(500, 500);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Exercise 1.1");
	glutDisplayFunc(myDisplay);
	glutMouseFunc(myMouse);
	myInit();
	glutMainLoop();

	return 1;
}