#include <GL/glut.h>///�ϥ�GLUT�~��

void display()
{

    glutSolidTeapot( 0.3 );
    glutSwapBuffers();

}


int main(int argc, char *argv[])///�ڭ̪�main�禡 138
{
     glutInit(&argc, argv);///��l�� GLUT 140
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

     glutCreateWindow("GLUT Shapes");///145�ص���

      glutDisplayFunc(display);///148 �]�w�n�e�誺display���

      glutMainLoop();///174 �D�n�j��
}
