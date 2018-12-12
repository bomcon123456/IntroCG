//#include <gl/glut.h>
//#include <gl/GL.h>
//#include <string>
//
//void bitmap_output(int x ,int y, int z, std::string str, void *font)
//{
//	glRasterPos3f(x, y, 0);
//	for (std::size_t i = 0; i < str.size(); i++)
//	{
//		glutBitmapCharacter(font, str[i]);
//	}
//}
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3ub(255, 0, 0);
//	bitmap_output(0, 0, 0, "It's your papa!", GLUT_BITMAP_TIMES_ROMAN_24);
//	glFlush();
//}
//
//void main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowPosition(200, 200);
//	glutInitWindowSize(640, 480);
//	glutCreateWindow("Example 3");
//	glutDisplayFunc(myDisplay);
//	glutMainLoop();
//}