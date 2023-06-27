#include<GL/glut.h>

void draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1,1,1,1);

    glColor3d(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(0,0.4);
    glVertex2d(-0.4,0.4);
    glVertex2d(-0.4,0);
    glEnd();
    glFlush();
    glColor3d(0,0,1);
    glBegin(GL_TRIANGLES);
    glVertex2d(0,0.2);
    glVertex2d(-0.2,-0.2);
    glVertex2d(0.2,-0.2);
    glEnd();
    glFlush();
    glColor3d(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2d(0.1,0);
    glVertex2d(0.4,0);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.4,-0.6);
    glVertex2d(0.1,-0.6);
    glVertex2d(-0.1,-0.3);
    glEnd();
    glFlush();

}

int main(int argC,char *argv[]){
    glutInit(&argC,argv);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Pukar Bot");
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
