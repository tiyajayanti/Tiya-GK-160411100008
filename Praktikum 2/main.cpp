#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 //kotak 1
    glColor3f (1.0, 1.0, 1.0);//warna kiri bawah
     for(int i = -1; i<=0; i++){
            for(int j = 0; j<= 1; j++){
                glRectf(-1.0, i, 0.0, j);
            }
        glColor3f (1.0, 0.0, 0.0);//warna kiri atas
     }

//kotak 2
     glColor3f (1.0, 0.0, 0.0);//warna kanan bawah

     for(int i = -1; i<=0; i++){
        for(int j = 0; j<= 1; j++){
                glRectf(0.0, i, 1.0, j);
            }
       glColor3f (1.0, 1.0, 1.0);//warna kanan atas
    }

//hurur T
    glColor3f(1.0, 1.0, 1.0); // warna huruf T putih
    glRectf(-0.6, 0.1, -0.4, 0.9);
    glRectf(-0.9, 0.7, -0.1, 0.9);

//huruf I
    glColor3f(1.0, 0.0, 0.0); // warna huruf I merah
    glRectf(0.4, 0.1, 0.6, 0.9);

//hurur Y
    glColor3f(1.0, 0.0, 0.0); // warna huruf Y merah
    glRectf(-0.8, -0.5, -0.6, -0.1);
    glRectf(-0.8, -0.5, -0.2, -0.4);
    glRectf(-0.4, -0.4, -0.2, -0.1);
    glRectf(-0.6, -0.9, -0.4, -0.4);
//hurur A
    glColor3f(1.0, 1.0, 1.0); // warna huruf A putih
    glRectf(0.2, -0.9, 0.4, -0.1);
    glRectf(0.2, -0.3, 0.8, -0.1);
    glRectf(0.6, -0.9, 0.8, -0.1);
    glRectf(0.4, -0.6, 0.6, -0.5);

 glFlush();
}
void myinit(){
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-2.0,2.0,-2.0,2.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0.0,0.0,0.0,0.0);

}
int main(int argc, char* argv[]){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 //glutInitWindowPosition(100,100);
 glutCreateWindow("Primitif Bangun Datar");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
 return 0;
}
