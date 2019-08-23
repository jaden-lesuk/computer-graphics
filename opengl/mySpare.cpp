#include <windows.h> //including windows
#include <GL\glut.h>//glut library
#include <math.h>//glut library

void init() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Setting background color to black
	gluOrtho2D(-1.5, 1.5, -1.5, 1.5); // defining the cartesian plane
}

void MySquare() {
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();
	glFlush(); //render now

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.5f, -0.25f);
	glVertex2f(-0.5f, -0.25f);
	glVertex2f(0.0f, 0.75f);
	glEnd();
	glFlush(); //render now

	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPointSize(10.0);
	glBegin(GL_POINTS);
	glColor3f(0.165f, 0.42f, 0.42f);
	glVertex2f(0.5f, -0.25f);
	glVertex2f(-0.5f, -0.25f);
	glVertex2f(0.0f, 0.75f);
	glEnd();
	glFlush(); //render now

	glEnable(GL_POINT_SMOOTH);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPointSize(20.0);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(0.5f, -0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(-0.5f, 0.5f);
	glEnd();
	glFlush(); //render now
	
}


int main(int argc, char**argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Hello guys");
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(50,50);
	init();
	glutDisplayFunc(MySquare);
	glutMainLoop();// Enter the event processing loop
}