#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void kubusgaris()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,0,1);
glRotated(35,1,1,1);
glutWireCube(3);
glLoadIdentity();

}

void teko()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,1,0);
glRotated(35,1,1,1);
glTranslated(15,0,0);
glutWireTeapot(2);
glLoadIdentity();

}

void kubuswarna()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f(9,0,5);
    glVertex3f(-5,0,-10);
glEnd();




glRotated(-35, 1,1,1);
glTranslated(10,-7,10);

    //depan
     glColor3f(0.0,0.0,1.0);
glBegin(GL_POLYGON);
     glVertex3f(-1.0, -1.0, 1.0);


    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
glEnd();

    //belakang
    glColor3f(0.0,1.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);
glEnd();

    //kiri
    glColor3f(1.0,0.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, -1.0);
glEnd();

    //kanan
    glColor3f(0.0,1.0,1.0);
glBegin(GL_POLYGON);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, -1.0, 1.0);
glEnd();

    //bawah
    glColor3f(1.0,0.0,1.0);
glBegin(GL_POLYGON);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);
glEnd();

    //atas
    glColor3f(1.0,1.0,0.0);
glBegin(GL_POLYGON);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(-1.0, 1.0, -1.0);
glEnd();
glLoadIdentity();


}


void bola()
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f(14,6,0);
    glVertex3f(-15,-5,0);
glEnd();

    glColor3f(1,0,0);
glTranslated(-15,-5,0);
glRotated(35,1,1,1);
glutWireSphere(2,12,12);
glLoadIdentity();

}

void cone()
{

    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex3f(-2,11,0);
    glVertex3f(4,-14,0);
glEnd();


    glColor3f(1,1,0);
glRotated(35,1,1,1);
glTranslated(0,15,0);
glutWireCone(3,10,15,13);
glLoadIdentity();
}

void pira()
{

    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,1);
glRotated(30,1,1,1);
glTranslated(0,-15,0);
glutWireCone(3,3,3,1);
glLoadIdentity();

}


void kotak()//BUAT KOTAK ISI
{
    //glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);



    glColor3f(0,1,1);
glRotated(35,1,1,1);
glTranslated(0,4,-10);
glutWireSphere(3,3,3);
glLoadIdentity();

}

void gabung()//DIGABUNG SEMUA
{
glClear (GL_COLOR_BUFFER_BIT);

glRotated(75,1,1,1);
kubusgaris();
teko();
kubuswarna();
bola();
cone();
pira();
kotak();


}





void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
gabung();




glFlush ();
}





void init(void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-20.0, 20.0, -20, 20.0, -20.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glShadeModel (GL_FLAT);
glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(600, 600);
glutInitWindowPosition(100, 100);
glutCreateWindow("Nomor 3");
init();
glutDisplayFunc(display);
glutMainLoop();
    return 0;
}


