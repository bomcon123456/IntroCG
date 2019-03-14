//#include <Windows.h>
//
//#include <GL/gl.h>
//#include <gl/glut.h>
//
//float ctrlpoints[4][4][3] = {
//	{{-1.5, -1.5, 4.0}, {-0.5, -1.5, 2.0}, {0.5, -1.5, -1.0}, {1.5, -1.5, 2.0}},
//	{{-1.5, 0.5, 4.0}, {-0.5, 0.5, 0.0}, {0.5, 0.5, 3.0}, {1.5, 0.5, 4.0}},
//	{{-1.5, -0.5, 1.0}, {-0.5, -0.5, 3.0}, {0.5, -0.5, 0.0}, {1.5, -0.5, -1.0}},
//	{{-1.5, 1.5, -2.0}, {-0.5, 1.5, -2.0}, {0.5, 1.5, 0.0}, {1.5, 1.5, -1.0}}
//};
//
//void myInit()
//{
//	glClearColor(1.f, 1.f, 1.f, 1.f);
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, 4, 0, 1, 12, 4, &ctrlpoints[0][0][0]);
//    glEnable(GL_MAP2_VERTEX_3);
//    glEnable(GL_DEPTH_TEST);
//	glShadeModel(GL_FLAT);
//
//	glViewport(0.0, 0.0, 800, 600);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-4.0*1.3333, 4.0*1.3333, -4.0, 4.0, -4.0,4.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
//void myDisplay()
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glColor3f(1.f, 0.f, 0.f);
//	glViewport(0.0,0.0,800,600);
//    glPushMatrix();
//        glRotatef(35.f, 1.f, 1.f, 1.f);
//        for(int j = 0; j<=8 ;j++)
//        {
//			glBegin(GL_LINE_STRIP);
//			for(int i=0; i<=30; i++)
//			{
//				glEvalCoord2f((float)i/30.0f, (float)j/8.f);
//			}
//			glEnd();
//			glBegin(GL_LINE_STRIP);
//			for (int i = 0; i <= 30; i++)
//			{
//				glEvalCoord2f((float)j / 8.0f, (float)i / 30.f);
//			}
//			glEnd();
//        }
//		//glMapGrid2f(8, 0, 1, 8, 0, 1);
//		//glEvalMesh2(GL_LINE, 0, 8, 0, 8);
//    glPopMatrix();
//
//	glFlush();
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(800, 600);
//	glutCreateWindow("Example 6.2");
//	myInit();
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}