#include <GL/glut.h> // GLUT
#include <GL/glu.h> // GLU
#include <GL/gl.h> // OpenGL
#include <stdio.h>
#include <math.h>
int a[3] = { 1.0, 0.0, 0.0 }, b[3] = { 0.0, 0.0, -1.0 }, c[3] = { -1.0, 0.0, 1.0 }, d[3] = { 0.0, 0.0, 1.0 },
e[3] = { 0.0, 1.0, 0.0 };
float angle_x = 0.0;
float angle_y = 0.0;
float angle_z = 0.0;
void drawcube(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, .0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glRotatef(angle_z, 0.0, 0.0, 1.0);
	glRotatef(angle_y, 0.0, 1.0, 0.0);
	glRotatef(angle_x, 1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3iv(a);
	glVertex3iv(b);
	glVertex3iv(e);
	glEnd();
	glColor3f(0.0, 1.0, .0);
	glBegin(GL_POLYGON);
	glVertex3iv(a);
	glVertex3iv(c);
	glVertex3iv(d);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3iv(b);
	glVertex3iv(c);
	glVertex3iv(e);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3iv(e);
	glVertex3iv(c);
	glVertex3iv(d);
	glEnd();
	glColor3f(1.0, .0, 1.0);
	glBegin(GL_POLYGON);
	glVertex3iv(a);
	glVertex3iv(b);
	glVertex3iv(e);
	glVertex3iv(d);
	glEnd();
	glFlush();
}
void myDisplay(void) {
	glClearColor(1., 1., 1., 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 0.0);
	glLoadIdentity(); /* clear the matrix */
	/* viewing transformation */
	gluLookAt(2.0, 3.0, 4.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	drawcube();
	glFlush();
}
void myReshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
}
void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'x':
	case 'X':
		angle_x += 10.;
		glutPostRedisplay();
		break;
	case 'z':
	case 'Z':
		angle_z += 10.;
		glutPostRedisplay();
		break;
	case 'y':
	case 'Y':
		angle_y += 10.;
		glutPostRedisplay();
		break;
	case 'i':
	case 'I':
		angle_z = 0.;
		angle_x = 0.;
		angle_y = 0.;
		glutPostRedisplay();
		break;
	case 27:
		exit(0);
		break;
	}
}
int run(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400); // create a 400x400 window
	glutInitWindowPosition(0, 0); // ...in the upper left
	glutCreateWindow("Bai 7.1"); // create the window
	glutDisplayFunc(myDisplay); // setup callbacks
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(myReshape);
	glutMainLoop(); // start it running
	return 0; // ANSI C expects this
}