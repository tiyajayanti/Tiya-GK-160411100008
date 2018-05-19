#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>

void papanbiru(){
    glColor3f (0.0, 0.0, 1.0);//RGB
    glRectf(-10.0,-8.0,-8.0,-6.0);
    glRectf(-10.0,-4.0,-8.0,-2.0);
    glRectf(-10.0,0.0,-8.0,2.0);
    glRectf(-10.0,4.0,-8.0,6.0);
    glRectf(-10.0,8.0,-8.0,10.0);

    glRectf(-8.0,-10.0,-6.0,-8.0);
    glRectf(-8.0,-6.0,-6.0,-4.0);
    glRectf(-8.0,-2.0,-6.0,0.0);
    glRectf(-8.0,2.0,-6.0,4.0);
    glRectf(-8.0,6.0,-6.0,8.0);

    glRectf(-6.0,-8.0,-4.0,-6.0);
    glRectf(-6.0,-4.0,-4.0,-2.0);
    glRectf(-6.0,0.0,-4.0,2.0);
    glRectf(-6.0,4.0,-4.0,6.0);
    glRectf(-6.0,8.0,-4.0,10.0);

    glRectf(-4.0,-10.0,-2.0,-8.0);
    glRectf(-4.0,-6.0,-2.0,-4.0);
    glRectf(-4.0,-2.0,-2.0,0.0);
    glRectf(-4.0,2.0,-2.0,4.0);
    glRectf(-4.0,6.0,-2.0,8.0);

    glRectf(-2.0,-8.0,0.0,-6.0);
    glRectf(-2.0,-4.0,0.0,-2.0);
    glRectf(-2.0,0.0,0.0,2.0);
    glRectf(-2.0,4.0,0.0,6.0);
    glRectf(-2.0,8.0,0.0,10.0);

    glRectf(0.0,-10.0,2.0,-8.0);
    glRectf(0.0,-6.0,2.0,-4.0);
    glRectf(0.0,-2.0,2.0,0.0);
    glRectf(0.0,2.0,2.0,4.0);
    glRectf(0.0,6.0,2.0,8.0);

    glRectf(2.0,-8.0,4.0,-6.0);
    glRectf(2.0,-4.0,4.0,-2.0);
    glRectf(2.0,0.0,4.0,2.0);
    glRectf(2.0,4.0,4.0,6.0);
    glRectf(2.0,8.0,4.0,10.0);

    glRectf(4.0,-10.0,6.0,-8.0);
    glRectf(4.0,-6.0,6.0,-4.0);
    glRectf(4.0,-2.0,6.0,0.0);
    glRectf(4.0,2.0,6.0,4.0);
    glRectf(4.0,6.0,6.0,8.0);

    glRectf(6.0,-8.0,8.0,-6.0);
    glRectf(6.0,-4.0,8.0,-2.0);
    glRectf(6.0,0.0,8.0,2.0);
    glRectf(6.0,4.0,8.0,6.0);
    glRectf(6.0,8.0,8.0,10.0);

    glRectf(8.0,-10.0,10.0,-8.0);
    glRectf(8.0,-6.0,10.0,-4.0);
    glRectf(8.0,-2.0,10.0,0.0);
    glRectf(8.0,2.0,10.0,4.0);
    glRectf(8.0,6.0,10.0,8.0);

}


void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glRotated(45,0,0,1);
    papanbiru();
    glFlush();
}

void myinit(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.5,5.5,-5.5,5.5);//kiri,kanan,bawah,atas
    glMatrixMode(GL_MODELVIEW);
    glClearColor(1.0,1.0,0.0,0.0);//CMYK
}
int main(int argc, char* argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    //glutInitWindowPosition(100,100);
    glutCreateWindow("Papan Catur(Siti Rohmawati)");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
