#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>

static GLfloat spin = 0.0;

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
       for(int i = 0; i<=6; i++){
            for(int j = 0; j<=6; j++){
                if((i+j)%2==0){
                    glColor3f (1.0, 0.0, 0.0);
                }else{
                    glColor3f (1.0, 1.0, 1.0);
                }
                glRotated(spin,0,0,1);
                glTranslated(i,j,0);
                glRectf(0, 0, 1, 1);
                glLoadIdentity();
            }
    }
    glPopMatrix();
    glutSwapBuffers();
}

void spinDisplay(void)
{
    spin = spin + 0.01;
    if (spin > 360.0)
    spin = spin - 360.0;
    glutPostRedisplay();
}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_FLAT);
}

void reshape(int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 12.0, -5.0, 12.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void mouse(int button, int state, int x, int y)
{
    switch (button)
    {
        case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        glutIdleFunc(spinDisplay);
        break;
        case GLUT_MIDDLE_BUTTON:
        case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        glutIdleFunc(NULL);
        break;
        default:
        break;
    }
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (100, 100);
    glutCreateWindow (argv[0]);
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
