#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>


void bintang(){
    glBegin(GL_LINES);
    glVertex2f(-2.5,0.0);
    glVertex2f(0.0,7.0);
    glVertex2f(0.0,7.0);
    glVertex2f(1.5,2.5);
    glVertex2f(1.5,2.5);
    glVertex2f(0.5,2.5);
    glVertex2f(0.5,2.5);
    glVertex2f(0.0,4.5);
    glVertex2f(0.0,4.5);
    glVertex2f(-1.5,-0.5);
    glVertex2f(-1.5,-0.5);
    glVertex2f(-2.5,0.0);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    int x=5;
    for(float i=0;i<=x;i++){
    glRotated((360/x)*i,0,0,1);
    bintang();
    glLoadIdentity();
    }
    glFlush();
}
static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;
    }
    glutPostRedisplay();
}
static void SpecialKeys(int key, int x, int y)
{
    switch (key)
	{
		case GLUT_KEY_UP:
            glColor3f(0.0,1.0,1.0);
			break;
		case GLUT_KEY_DOWN:
            glColor3f(0.0,1.0,0.0);
			break;
	}
    glutPostRedisplay();
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10.0,10.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bintang");
    myinit();
    glutDisplayFunc(display);
    glutSpecialFunc(SpecialKeys);
    glutKeyboardFunc(key);
    glutMainLoop();

    return 0;
}
