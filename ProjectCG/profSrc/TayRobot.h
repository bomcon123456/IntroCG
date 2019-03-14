#include <gl/glut.h>
#include <gl/GL.h>
#include <iostream>
#include <Windows.h>
using namespace std;
#define SIZE 500
int shoulder = 0, elbow = 0;
void initGL();
void updateGL();
void keyboardListener(unsigned char c, int x, int y);

void run(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(SIZE, SIZE);
	glutCreateWindow("Draw a robot arm!");
	glutDisplayFunc(updateGL);
	glutKeyboardFunc(keyboardListener);
	initGL();
	glutMainLoop();
}

void initGL() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glViewport(0, 0, 500, 500);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(65.0, 1, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -5.0);
}

void updateGL() {
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 0, 0);
	/*Di chuyen truc sang toa do moi. Biến đổi ngược với quy trình. */
	glPushMatrix();
	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef(shoulder, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.5, 1.0);
	glutWireCube(1.0);
	/* Tra lai truc toa do cu. */
	glPopMatrix();
	glTranslatef(1.0, 0.0, 0.0);
	glRotatef(elbow, 0.0, 0.0, 1.0);
	glTranslatef(1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(2.0, 0.5, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();
	glutSwapBuffers();
}

void keyboardListener(unsigned char c, int x, int y) {
	switch (c) {
	case 's':case 'S':
		shoulder = (shoulder + 5) % 360;
		glutPostRedisplay();
		break;
	case 'e':case 'E':
		elbow = (elbow + 5) % 360;
		glutPostRedisplay();
		break;
	}
}
