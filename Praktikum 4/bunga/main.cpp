#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <math.h>
#endif

void koordinat (){
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(-12.5,0.0,0.0);
    glVertex3f(12.5,0.0,0.0);
    glVertex3f(0.0,-12.5,0.0);
    glVertex3f(0.0,12.5,0.0);
    glEnd();
}

void tengah(){
    glColor3f(1.0,0.4,0.6);
    glBegin(GL_POLYGON);
    for(float x=0; x<=6.28; x+=0.01){
    glVertex2f(0.2*cos(x),0.2*sin(x));
        }
    glEnd();
}
void kelopak(){
    //kelopak kiri
    glRotated(90,0,0,1);
    glColor3f(1.0,0.6,0.8);
	glBegin(GL_POLYGON);
        for(float x = 0.0; x<= 2.7; x+=0.1){
                glVertex3f(x+0.3, 1.0*sin(x), 0.0);

        }
        glColor3f(1.0,1.0,1.0);
        glVertex2f(2.5,0); //V KELOPAK
        //glVertex2f(1.5,0);
	glEnd();
	//glScaled(1,-1,1);

    //kelopak kanan
	glColor3f(1.0,0.6,0.8);
	glBegin(GL_POLYGON);
        for(float x = 0.0; x<= 2.7; x+=0.1){
            glVertex3f(x+0.3, 1.0*-sin(x), 0.0);
        }
        glColor3f(1.0,1.0,1.0);
        glVertex2f(2.5,0);
	glEnd();
	//glScaled(1,-1,1);

	glFlush();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);

	koordinat();
    tengah();
//	glRotated(90,0,0,1);
//    kelopak();
//    glRotated(72,0,0,1);
//    kelopak();
//    glRotated(72,0,0,1);
//    kelopak();
//    glRotated(72,0,0,1);
//    kelopak();
//    glRotated(72,0,0,1);
//    kelopak();

int x=5;
for(float i=0;i<x;i++){
    glRotated((360/x)*i,0,0,1);
    kelopak();
    glLoadIdentity();
}

    glFlush();
}

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-5.0,5.0,-5.0,5.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("BUNGA");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
