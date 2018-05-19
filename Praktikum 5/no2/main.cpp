#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1.0, 1.0, 0.0);
// Gambar lingkaran
glBegin(GL_LINE_LOOP);
    for(float t=0.0; t<=6.28; t+=0.01)
    {
        glVertex2f(8*cos(t),8*sin(t));
    }
glEnd();

//Gambar sumbu koordinat
glBegin(GL_LINES);
glVertex3f(-10.0,0.0,0.0);
glVertex3f(10.0,0.0,0.0);
glVertex3f(0.0,-10.0,0.0);
glVertex3f(0.0,10.0,0.0);
glEnd();

glColor3f(0.0,0.0,1.0);
    glRectf(-1,7,1,9);
    glPushMatrix();
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glRotated(30,0,0,1);
    glRectf(-1,7,1,9);
    glPopMatrix();
glFlush();
}

void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(0.0,0.0,0.0,0.0);
//glColor3f(0.0,0.0,0.0);
}
int main(int argc, char* argv[])
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("Transform");
glutDisplayFunc(display);
myinit();
glutMainLoop();
return 0;
}
