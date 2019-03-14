#include <GL/glut.h> // GLUT
#include <GL/glu.h> // GLU
#include <GL/gl.h> // OpenGL
#include <iostream>

using namespace std;

GLfloat light_position[] = { 1.0, 1.0, 10.0, 0.0 };
void init(void)
{
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glutSolidSphere(1.0, 20, 16);
	glutSolidTorus(0.5, 1, 20, 16);
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-1.5, 1.5, -1.5*(GLfloat)h / (GLfloat)w, 1.5*(GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-1.5*(GLfloat)w / (GLfloat)h, 1.5*(GLfloat)w / (GLfloat)h, -1.5, 1.5, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void keyEvent(int button, int state, int x, int y){
	int yy;
	yy = glutGet(GLUT_WINDOW_HEIGHT);
	y = yy - y;
	switch (button)
	{ // b indicates the button
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN) // button pressed
		{
			light_position[0] = x - 250;
			light_position[1] = y - 250;
			init();
			display();
		}
		else if (state == GLUT_UP) // button released
		{

		}
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN) // button pressed
		{
			cout << x << endl;
			cout << y << endl;
		}
		else if (state == GLUT_UP) // button released
		{

		}
		break;
		// ... // other button events
	default: break;
	}
}

void keyEvent(unsigned char key, int x, int y){
	switch (key)
	{
	case 'a':
	{
		light_position[0] -= 1;
		init();
		display();
		break;
	}
	case 'd':{
		light_position[0] += 1;
		init();
		display();
		break;
	}
	case 'w':
	{
		light_position[1] += 1;
		init();
		display();
		break;
	}
	case 's':
	{
		light_position[1] -= 1;
		init();
		display();
		break;
	}
	case 27:
		exit(1);
	default:
		break;
	}
}

void keyEvent(int x, int y){
	int yy;
	yy = glutGet(GLUT_WINDOW_HEIGHT);
	y = yy - y;
	light_position[0] = x - 250;
	light_position[1] = y - 250;
	init();
	display();
	//glutPostRedisplay();
}

int run(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Bài 8.1");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	//glutMouseFunc(keyEvent);
	//glutKeyboardFunc(keyEvent);
	glutMotionFunc(keyEvent);
	glutMainLoop();
	return 0;
}