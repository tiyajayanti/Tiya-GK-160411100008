#include <windows.h>
#include <math.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
#include "mmsystem.h"
#include <math.h>
using namespace std;
void display(void)
{
 /* bersihkan layar */
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 0.0);
 float t = 0.0;
 glBegin(GL_POINTS);
 for(t = -1.0; t<=1.0; t+=0.01){
 glVertex3f (0.5 - t, 1 + (2*t), 0.0);
 }
 glEnd();
// code glClear (GL_COLOR_BUFFER_BIT); digunakan untuk membersihkan layar setelah dibersihkan layar akan diberi POINT warna dengan menggunakan glColor3f (1.0, 1.0, 0.0); dan melakukan perulangan menggunakan titik radian bukan derajat untuk membuat kurva yang dinginkan dengan memasukkan fungsi.

 glBegin(GL_LINES);
 glVertex3f(-10.0,0.0,0.0);
 glVertex3f(10.0,0.0,0.0);
 glVertex3f(0.0,-10.0,0.0);
 glVertex3f(0.0,10.0,0.0);
 glEnd();
 glFlush ();
}
//Untuk membuat garis koordinat
 void kunci(unsigned char key, int x, int y)
{
 switch (key)
 {
 /* aplikasi berhenti ketika tombol q ditekan */
 case 27 :
 case 'q':
 exit(0);
 break;
 }
 glutPostRedisplay();
}
// digunakan untuk membuat fungsi keyboard agar dapat di klik atau digunakan.

int main(int argc, char *argv[])
{
 glutInitWindowSize(400,400);
 glutInitWindowPosition(100,100);
 glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
 glutCreateWindow("Primitif");
 gluOrtho2D(-10.0,10.0,-10.0,10.0);
 glutDisplayFunc(display);
 glutKeyboardFunc(kunci);
 glutMainLoop();
 return 0;
}
//digunakan untuk mengeksekusi program yang telah dibuat.
