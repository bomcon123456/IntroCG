#include <GL/glut.h> // GLUT
#include <GL/glu.h> // GLU
#include <GL/gl.h> // OpenGL

int _goc = 0;

GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
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
	glPushMatrix();
	glRotatef(_goc, 0.0, 1.0, 0.0);
	glutSolidTeapot(1);
	glPopMatrix();
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

void keyEvent(unsigned char key, int x, int y){
	switch (key)
	{
	case 'a':{
		_goc+=20;
		glutPostRedisplay();
		break;
	}
	case 'd':{
		_goc -= 20;
		glutPostRedisplay();
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
	glutCreateWindow("Ấm trà");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyEvent);
	glutMotionFunc(keyEvent);
	glutMainLoop();
	return 0;
}