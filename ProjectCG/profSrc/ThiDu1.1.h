#include <gl/glut.h>
#include <gl/gl.h>
void myDisplay(void) {
	glClearColor(1., 1., 1., 1.); // xóa màn hình bằng mã mầu 1111
	glClear(GL_COLOR_BUFFER_BIT); // xóa màn hình
	glColor3f(1., 0., 0.); // chọn màu đường vẽ
	glPointSize(12.0); // chọn kích thước vẽ
	glBegin(GL_POINTS); // chọn loại vẽ
	glVertex2i(0, 0); // vẽ điểm
	glEnd(); // kết thúc vẽ
	glFlush(); // thực thi hàm
}
void run(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 150); // vị trí window
	glutInitWindowSize(640, 480); // khích thước window
	glutCreateWindow("Thí d 1.1"); // tạo window
	glutDisplayFunc(myDisplay); // hiển thị
	glutMainLoop();
}