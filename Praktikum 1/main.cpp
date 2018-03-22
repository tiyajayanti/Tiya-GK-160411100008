#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5);
    glBegin(GL_LINES);//menggambar kotak segi empat besar
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex2f (-12.0, -12.0);
    glVertex2f (12.0, -12.0);
    glVertex2f (12.0, -12.0);
    glVertex2f (12.0, 12.0);
    glVertex2f (12.0, 12.0);
    glVertex2f (-12.0, 12.0);
    glVertex2f (-12.0, 12.0);
    glVertex2f (-12.0, -12.0);
    glVertex2f (-12.0, -12.0);
    glEnd();

    glBegin(GL_LINES);//menggambar garis lurus-bawah
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex2f (-12.0, -4.0);
    glVertex2f (12.0, -4.0);
    glEnd();

    glBegin(GL_LINES);//menggambar garis lurus-atas
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex2f (-12.0, 4.0);
    glVertex2f (12.0, 4.0);
    glEnd();

    glBegin(GL_LINES);//menggambar garis samping-kiri
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex2f (-4.0, 12.0);
    glVertex2f (-4.0, -12.0);
    glEnd();

    glBegin(GL_LINES);//menggambar garis samping-kanan
    glColor3f (1.0f, 0.0f, 0.0f);
    glVertex2f (4.0, 12.0);
    glVertex2f (4.0, -12.0);
    glEnd();

    glBegin(GL_LINES);//tepi A
    glColor3f (1.0f, 1.0f, 1.0f);
    glVertex2f (0.0, 3.0);
    glVertex2f (-3.0, -3.0);
    glVertex2f (-3.0, -3.0);
    glVertex2f (-1.5, -3.0);
    glVertex2f (-1.5, -3.0);
    glVertex2f (-1.0, -2.0);
    glVertex2f (-1.0, -2.0);
    glVertex2f (1.0, -2.0);
    glVertex2f (1.0, -2.0);
    glVertex2f (1.5, -3.0);
    glVertex2f (1.5, -3.0);
    glVertex2f (3.0, -3.0);
    glVertex2f (3.0, -3.0);
    glVertex2f (0.0, 3.0);
    glEnd();

    glBegin(GL_LINES);//dalem A
    glColor3f (1.0f, 1.0f, 1.f);
    glVertex2f (0.0, 1.0);
    glVertex2f (-1.0, -1.0);
    glVertex2f (-1.0, -1.0);
    glVertex2f (1.0, -1.0);
    glVertex2f (1.0, -1.0);
    glVertex2f (0.0, 1.0);
    glEnd();

    glBegin(GL_LINES);//angka 1
    glColor3f (1.0f, 1.0f, 1.f);
    glVertex2f (-8.0, -5.0);
    glVertex2f (-7.0, -5.0);
    glVertex2f (-7.0, -5.0);
    glVertex2f (-7.0, -10.0);
    glVertex2f (-7.0, -10.0);
    glVertex2f (-6.0, -10.0);
    glVertex2f (-6.0, -10.0);
    glVertex2f (-6.0, -11.0);
    glVertex2f (-6.0, -11.0);
    glVertex2f (-9.0, -11.0);
    glVertex2f (-9.0, -11.0);
    glVertex2f (-9.0, -10.0);
    glVertex2f (-9.0, -10.0);
    glVertex2f (-8.0, -10.0);
    glVertex2f (-8.0, -10.0);
    glVertex2f (-8.0, -7.0);
    glVertex2f (-8.0, -7.0);
    glVertex2f (-9.0, -7.0);
    glVertex2f (-9.0, -7.0);
    glVertex2f (-9.0, -6.0);
    glVertex2f (-9.0, -6.0);
    glVertex2f (-8.0, -5.0);
    glEnd();
    glFlush();
}
void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-15.0,15.0,-15.0,15.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutCreateWindow("Obyek Primitif");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
