#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void x()
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
glRotated(45, 0,0,1);

    //depan
    glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
    glVertex3f(-2, 6, 1);
    glVertex3f(2, 6, 1);
    glVertex3f(2, -10, 1);
    glVertex3f(-2, -10, 1);
glEnd();

    glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
    glVertex3f(-8, 0, 1);
    glVertex3f(8, 0, 1);
    glVertex3f(8, -4, 1);
    glVertex3f(-8, -4, 1);
glEnd();

    //Belakang
    glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(-2, 6, -1);
    glVertex3f(2, 6, -1);
    glVertex3f(2, -10, -1);
    glVertex3f(-2, -10, -1);
glEnd();

    glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(-8, 0, -1);
    glVertex3f(8, 0, -1);
    glVertex3f(8, -4, -1);
    glVertex3f(-8, -4, -1);
glEnd();

    //atas
    glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(-2, 6, 1);
    glVertex3f(2, 6, 1);
    glVertex3f(2, 6, -1);
    glVertex3f(-2, 6, -1);
glEnd();

    glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(2, 6, 1);
    glVertex3f(2, 0, 1);
    glVertex3f(2, 0, -1);
    glVertex3f(2,6, -1);
glEnd();

    glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(2, 0, 1);
    glVertex3f(8, 0, 1);
    glVertex3f(8, 0, -1);
    glVertex3f(2,0, -1);
glEnd();

    glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
    glVertex3f(8, 0, 1);
    glVertex3f(8, -4, 1);
    glVertex3f(8, -4, -1);
    glVertex3f(8,0, -1);
glEnd();

    glColor3f(1,1,0);
glBegin(GL_POLYGON);
    glVertex3f(8, -4, 1);
    glVertex3f(2, -4, 1);
    glVertex3f(2, -4, -1);
    glVertex3f(8,-4, -1);
glEnd();

    glColor3f(1,1,0);
glBegin(GL_POLYGON);
    glVertex3f(8, -4, 1);
    glVertex3f(2, -4, 1);
    glVertex3f(2, -4, -1);
    glVertex3f(8,-4, -1);
glEnd();


    glColor3f(1,1,0);
glBegin(GL_POLYGON);
    glVertex3f(2, -4, 1);
    glVertex3f(2, -10, 1);
    glVertex3f(2, -10, -1);
    glVertex3f(2,-4, -1);
glEnd();

    glColor3f(0,1,1);
glBegin(GL_POLYGON);
    glVertex3f(2, -10, 1);
    glVertex3f(-2, -10, 1);
    glVertex3f(-2, -10, -1);
    glVertex3f(2,-10, -1);
glEnd();

    glColor3f(1,1,0);
glBegin(GL_POLYGON);
    glVertex3f(-2, -10, 1);
    glVertex3f(-2, -4, 1);
    glVertex3f(-2, -4, -1);
    glVertex3f(-2,-10, -1);
glEnd();

     glColor3f(1,0,0);
glBegin(GL_POLYGON);
    glVertex3f(-2, -4, 1);
    glVertex3f(-8, -4, 1);
    glVertex3f(-8, -4, -1);
    glVertex3f(-2,-4, -1);
glEnd();

    glColor3f(1,0,0);
glBegin(GL_POLYGON);
    glVertex3f(-8, -4, 1);
    glVertex3f(-8, 0, 1);
    glVertex3f(-8, 0, -1);
    glVertex3f(-8,-4, -1);
glEnd();

      glColor3f(1,1,0);
glBegin(GL_POLYGON);
    glVertex3f(-8, 0, 1);
    glVertex3f(-2, 0, 1);
    glVertex3f(-2, 0, -1);
    glVertex3f(-8,0, -1);
glEnd();

     glColor3f(0,1,1);
glBegin(GL_POLYGON);
    glVertex3f(-2, 0, 1);
    glVertex3f(-2, 6, 1);
    glVertex3f(-2, 6, -1);
    glVertex3f(-2,0, -1);
glEnd();

    //glFlush();
}
    void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glRotated(35, 1,0,0);
x();


glFlush ();
}





void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-12.0,12.0,-12.0,12.0,-12.0,12.0);
glMatrixMode(GL_MODELVIEW);
glClearColor(0.0,0.0,0.0,1.0);
        glColor3f(0.0,0.0,0.0);
glShadeModel(GL_FLAT);
glEnable(GL_DEPTH_TEST);
    }

int main(int argc, char* argv[])
    {
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("SilangWarna Pandu tok");
glutDisplayFunc(display);
myinit();
glutMainLoop();

        return 0;
    }


