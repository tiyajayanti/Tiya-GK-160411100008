#include <windows.h>
#include <math.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
void display(void)
{
 /* bersihkan layar */
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 0.0, 0.0);
 float t = 0.0;
 glBegin(GL_POINTS);
 for(t = -4.0; t<=4.0; t+=0.01){
 glVertex3f (t*t-3,t, 0.0);
 }
 glEnd();
 glBegin(GL_LINES);
 glVertex3f(-10.0,0.0,0.0);
 glVertex3f(10.0,0.0,0.0);
 glVertex3f(0.0,-10.0,0.0);
 glVertex3f(0.0,10.0,0.0);
 glEnd();
glFlush ();
}
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
int main(int argc, char *argv[])
{
 glutInitWindowSize(400,400);
 glutInitWindowPosition(100,100);
 glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
 glutCreateWindow("Primitif");
 glutDisplayFunc(display);
 glClearColor(1.0,1.0,1.0,1.0);
 gluOrtho2D(-10.0,10.0,-10.0,10.0);
 glutKeyboardFunc(kunci);
 glutMainLoop();
 return 0;
}
