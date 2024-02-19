#include <GL/glut.h>///使用GLUT外掛

void display()
{

    glutSolidTeapot( 0.3 );
    glutSwapBuffers();

}


int main(int argc, char *argv[])///我們的main函式 138
{
     glutInit(&argc, argv);///初始化 GLUT 140
     glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

     glutCreateWindow("GLUT Shapes");///145建視窗

      glutDisplayFunc(display);///148 設定要畫質的display函示

      glutMainLoop();///174 主要迴圈
}
