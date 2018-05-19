#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include <Math.h>

void kepala(){
    glColor3f (0.0, 0.7, 0.1);
    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(6*cos(x),6+4*sin(x));//6cos=sb x 6, 6sin=sb y 6, 4=lebar/tinggi
    }
    //ngubah posisi +/- ngubah lebar*
    glEnd();
}

void pinggang(){
    glColor3f (0.0, 0.7, 0.1);
    glBegin(GL_POLYGON);//kiri
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(-5.7+cos(x),0.2+7*sin(x));//0.2 posisi peletakan titik atasnya, 7=tingginya, -5.5
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(5.7+cos(x),0.2+7*sin(x));
    }
    glEnd();
    }

void badan(){
    glColor3f (0.0, 0.7, 0.1);
    glRectf(-5.5,-7.4,5.5,6);
}

void telingaluar(){
    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);//kiri
    glVertex2f(7.0,5.0);
    glVertex2f(7.0,10.0);
    glVertex2f(4.0,7.0);
    glEnd();

    glBegin(GL_TRIANGLES);//kanan
    glVertex2f(-7.0,5.0);
    glVertex2f(-7.0,10.0);
    glVertex2f(-4.0,7.0);
    glEnd();
}

void telingadalam(){
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);//kiri
    glVertex2f(-6.5,5.3);
    glVertex2f(-6.5,8.5);
    glVertex2f(-4.5,6.6);

    glBegin(GL_TRIANGLES);//kanan
    glVertex2f(6.5,5.3);
    glVertex2f(6.5,8.5);
    glVertex2f(4.5,6.6);
    glEnd();
}

void mataluar(){
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON); //kiri
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(-2+1.5*cos(x),4+1.7*sin(x));//-2=posisi titik tengah lingkaran sb x/4=sb y, 1,5sin=tinggi/1,5cos=lebarlingakaran
    }
    glEnd();

    glBegin(GL_POLYGON);//kanan
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(2+1.5*cos(x),4+1.7*sin(x));
    }
    glEnd();
}

void matadalam(){
    glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //kiri
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(-2+0.65*cos(x),4+0.75*sin(x));//-2=posisi titik tengah lingkaran sb x/4=sb y, 1,5sin=tinggi/1,5cos=lebarlingakatran
    }
    glEnd();

    glBegin(GL_POLYGON); //kanan
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(2+0.65*cos(x),4+0.75*sin(x));
    }
    glEnd();
}

void hidung(){
    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_POLYGON); //kiri
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(0.0+1*cos(x),1+2*sin(x));//0.0=posisi titik tengah lingkaran sb x/1=sb y, 1sin=tinggi/2cos=lebarlingakatran
    }
    glEnd();
}

void mulut(){
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(float x=-2; x<=2; x+=0.01){
    glVertex2f(2.2*x,-5.6+x*x);//bentuk, posisi
    }
    glEnd();

    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    for(float x=-1.8; x<=1.8; x+=0.01){
    glVertex2f(2.2*x,-5.6+x*x);
    }
    glEnd();

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(float x=-1.0; x<=1.0; x+=0.01){
    glVertex2f(2.2*x,-5.6+x*x);
    }
    glEnd();
}

void kaki(){
    glColor3f (0.0, 0.7, 0.1);
    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-5.2-1.0*cos(x),-4.8-3.5*sin(x));//5.5sin=posi y, 3.5 tinggi/lebar y, 1cos=lebar/panjang x
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-2.6-1.0*cos(x),-4.8-3.5*sin(x));//5.5sin=posi y, 3.5 tinggi/lebar y, 1cos=lebar/panjang x
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-0.0-1.0*cos(x),-4.8-3.5*sin(x));//5.5sin=posi y, 3.5 tinggi/lebar y, 1cos=lebar/panjang x
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(2.6-1.0*cos(x),-4.8-3.5*sin(x));//5.5sin=posi y, 3.5 tinggi/lebar y, 1cos=lebar/panjang x
    }
    glEnd();

    glBegin(GL_POLYGON);
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(5.2-1.0*cos(x),-4.8-3.5*sin(x));//5.5sin=posi y, 3.5 tinggi/lebar y, 1cos=lebar/panjang x
    }
    glEnd();
}

void kakidalam(){
    glColor3f (0.0, 0.0, 0.0);//
    glBegin(GL_POLYGON);//bawah
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-0.7*x-2.8,2*sin(x)-8.7);//panjang,posisix,tinggi, posisi y
    }
    glEnd();

    glBegin(GL_POLYGON);//bawah
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-0.7*x-0.2,2*sin(x)-8.7);//panjang,posisix,tinggi, posisi y
    }
    glEnd();

    glBegin(GL_POLYGON);//bawah
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-0.7*x+2.39,2*sin(x)-8.7);//panjang,posisix,tinggi, posisi y
    }
    glEnd();

    glBegin(GL_POLYGON);//bawah
    for(float x=0; x<=3.14; x+=0.01){
    glVertex2f(-0.7*x+5.0,2*sin(x)-8.7);//panjang,posisix,tinggi, posisi y
    }
    glEnd();
}

void display(){
    /* bersihkan layar */
    glClear (GL_COLOR_BUFFER_BIT);
    kepala();
    pinggang();
    badan();
    telingaluar();
    telingadalam();
    mataluar();
    matadalam();
    hidung();
    kakidalam();
    kaki();
    mulut();
    glFlush ();
}

void kunci(unsigned char key, int x, int y){
    switch (key){
    /* aplikasi berhenti ketika tombol q ditekan */
        case 27 :
        case 'q':
        exit(0);
        break;
    }
    glutPostRedisplay();
}

void myinit(){
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glColor3f(1.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0, 10.0, -12.0, 12.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[]){
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Kucing");
    glutDisplayFunc(display);
    //glutKeyboardFunc(kunci);
    myinit();
    glutMainLoop();
    return 0;
}
