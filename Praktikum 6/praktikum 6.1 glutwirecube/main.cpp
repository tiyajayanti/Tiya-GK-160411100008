#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void kotak()//Buat 1 Kotak
{
    glColor3f(1,1,1);
    //glRotated(35,1,1,1);
glutWireCube(2);

}

void silang()//Di Gabung
{
glRotated(45,0,0,1);
kotak();
glTranslated(0,2,0);
kotak();

glTranslated(0,2,0);
kotak();


glTranslated(2,-2,0);
kotak();

glTranslated(-4,0,0);
kotak();

}

void display(void)//Dipanggil agar bisadiputar
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

glRotated(30,1,0,0);
silang();

glFlush();
}
void init(void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-6.0, 8.0, -6.0, 6.0, -6.0, 6.0);
glMatrixMode(GL_MODELVIEW);
glShadeModel (GL_FLAT);
glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(400, 400);
glutInitWindowPosition(100, 100);
glutCreateWindow("Kubus");
init();
glutDisplayFunc(display);
glutMainLoop();
    return 0;
}
