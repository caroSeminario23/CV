#include <GL/glut.h>
#include <math.h>

void inicio(){
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-100,100,-100,100);
    glClearColor(0.0,0.0,0.5,0.0);
}

void pantalla(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    glLineWidth(3);
    //TRIANGULO 1
    glBegin(GL_TRIANGLES);
    glVertex3f(-40.0,20.0,0.0);
    glVertex3f(20.0,30.0,0.0);
    glVertex3f(-20.0,0.0,0.0);
    glEnd();

    //TRIANGULO 2
    glBegin(GL_TRIANGLES);
    glVertex3f(-30.0,-30.0,0.0);
    glVertex3f(-10.0,-5.0,0.0);
    glVertex3f(30.0,-10.0,0.0);
    glEnd();
    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitWindowSize(680,480);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("S11 - EJERCICIO 22");

    inicio();
    glutDisplayFunc(pantalla);
    glutMainLoop();
    return EXIT_SUCCESS;
}
