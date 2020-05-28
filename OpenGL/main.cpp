#include "GL/freeglut.h"
#include "GL/gl.h"

#include "drawer.h"

Drawer drawer;

#define WIDTH 900
#define HEIGHT 600

void draw() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	

    drawer.drawCircle(150, 150);
    glutSwapBuffers();

	glFlush();
}

void bootstrap() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, WIDTH, HEIGHT, 0.0f, -1.0f, 1.0f);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("OpenGL - Tutorial");
	bootstrap();
	glutDisplayFunc(draw);
	glutMainLoop();

    return EXIT_SUCCESS;
}