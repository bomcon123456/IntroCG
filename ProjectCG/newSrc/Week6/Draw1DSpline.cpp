//#include <Windows.h>
//
//#include <gl/GL.h>
//#include <gl/glut.h>
//#include <iostream>
//
//float ctrlPoints[4][3] ={
//	{-4.0f,-4.0f,0.0f}, {-2.0f, 4.0f, 0.0f},
//	{2.0f, -4.0f, 0.0f}, {4.0f, 4.0f, 0.0f}
//};
//
//#define NUM_STEPS 30
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.f, 0.f, 0.f);
//	glShadeModel(GL_FLAT);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-5.0*(GLfloat)800 / (GLfloat)600, 5.0*(GLfloat)800 / (GLfloat)600, -5.0, 5.0, -5.0, 5.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glViewport(0, 0, 800, 600);
//	glMap1f(GL_MAP1_VERTEX_3, 0.0, 1, 3, 4, &ctrlPoints[0][0]);
//	glEnable(GL_MAP1_VERTEX_3);
//
//
//	// Draw Spline normal way.
//	glBegin(GL_LINE_STRIP);
//	for (int i = 0; i <= NUM_STEPS; i++)
//	{
//		// This function will return u value on spline;
//		glEvalCoord1f((float)i / (float)NUM_STEPS);
//	}
//	glEnd();
//	
//	////If you want all values of u are equal -> use this
//	//glMapGrid1f(NUM_STEPS, 0, 1);
//	//glEvalMesh1(GL_LINE, 0, NUM_STEPS);
//	//glFlush();
//	
//	// This to draw the control points
//	glPointSize(5.0);
//	glColor3f(1.f,0.f,0.f);
//	glBegin(GL_POINTS);
//		for(int i=0; i<4; i++)
//		{
//			glVertex3fv(&ctrlPoints[i][0]);
//		}
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(800, 600);
//	glutCreateWindow("Example61");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}