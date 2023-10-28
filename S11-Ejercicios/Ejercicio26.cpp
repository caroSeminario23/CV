#include <GL/glut.h>
#include <math.h>
#include <iostream>

void inicio(){
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-100,100,-100,100);
    glClearColor(0.0,0.0,0.5,0.0);
}

void pantalla(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    glLineWidth(3);
    glColor3f(0.7,0.0,0.0);
    glBegin(GL_QUAD_STRIP);
    glVertex3f(-60.0,0.0,0.0);
    glVertex3f(-60.0,50.0,0.0);
    glVertex3f(-30.0,0.0,0.0);
    glVertex3f(-25.0,35.0,0.0);
    glVertex3f(0.0,-30.0,0.0);
    glVertex3f(0.0,45.0,0.0);
    glVertex3f(40.0,-15.0,0.0);
    glVertex3f(40.0,40.0,0.0);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(680,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("S11 - EJERCICIO 26");
    inicio();
    glutDisplayFunc(pantalla);
    glutMainLoop();
    return EXIT_SUCCESS;
}
