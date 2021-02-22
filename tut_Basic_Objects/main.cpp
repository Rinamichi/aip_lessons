#include "drawlib.h"

void renderScene(void);

int main(int argc, char* argv[])
{   
    initSky();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);
    glutTimerFunc(1000 / 60, animateScene, 1);
    startTime = clock();
    glutMainLoop();
    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 

    curTime = clock() - startTime;

    FON();

    drawSky();

    glPushMatrix();
    Figure tree;
    tree.xs = 0.5;
    tree.ys = 0.5;
    tree.xt = 0.9;
    tree.yt = 0.4;
    tree.xr = 0;
    tree.yr = 0;
    drawTree(tree);
    glPopMatrix();

    drawdino1();
    drawMovingdino2(curTime);
    drawMovingdino3(curTime);

    glutSwapBuffers();
}

