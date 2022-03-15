#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(.5);

glBegin(GL_POLYGON);
	glColor3ub(128,0,128);
    glVertex2f(-0.3f, -0.15f);
	glVertex2f(-0.3f, 0.15f);



	glVertex2f(-0.8f, 0.47f);
	glVertex2f(-0.9f, 0.4f);

	glVertex2f(-0.9f, -0.4f);
	glVertex2f(-0.8f, -0.47f);

    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

	glVertex2f(-0.75f, -0.2f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.45f, 0.0f);

	glEnd();

    //2nd

glBegin(GL_POLYGON);
	glColor3ub(128,0,128);
	glVertex2f(0.75f, -0.8f);
	glVertex2f(0.9f, -0.7f);

	glVertex2f(0.9f, 0.7f);
	glVertex2f(0.75f, 0.8f);


	glVertex2f(-0.3f, 0.15f);
	glVertex2f(-0.3f, -0.15f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

	glVertex2f(0.6f, -0.4f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.0f, 0.0f);

	glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Visual Studio Logo");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
