#include "drawlib.h"

clock_t curTime, startTime;

std::vector<Figure>sky;

void FON() {

    glBegin(GL_QUADS);
    glColor3f(.02, .75, .39);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 0);
    glVertex2f(-1, 0);
    glEnd();
}

void drawstars(Figure star) {

    glPushMatrix();
    glScalef(.5, .5, 0);
    glTranslatef(star.x, star.y, 0);

    glBegin(GL_TRIANGLES);
    glColor3f(6, 6, 1);
    glVertex2f(-0.95, 0.75);
    glVertex2f(-0.9, 0.85);
    glVertex2f(-0.85, 0.8);

    glColor3f(.7, .7, .1);
    glVertex2f(-0.85, 0.8);
    glVertex2f(-0.8, 0.85);
    glVertex2f(-0.75, 0.75);

    glColor3f(.8, .8, .1);
    glVertex2f(-0.95, 0.9);
    glVertex2f(-0.85, 0.8);
    glVertex2f(-0.75, 0.9);

    glColor3f(.9, .9, .1);
    glVertex2f(-0.875, 0.9);
    glVertex2f(-0.85, 1);
    glVertex2f(-0.825, 0.9);
    glEnd();

    glPopMatrix();

}

void drawSky() {

    glPushMatrix();
    glScalef(.5, .5, 1);
    for (int i = 0; i < sky.size(); i++) {
        drawstars(sky[i]);
    }
    glPopMatrix();
}

void initSky() {

    srand(clock());
    Figure star;
    for (int i = 0; i < 50; i++) {
        star.x = .1 * (rand() % 100) - 3.0;
        star.y = 0.1 * (rand() % 30);
        sky.push_back(star);
    }
}

void drawdinosavr1(Figure dinosavr1) {

    glPushMatrix();
    glScalef(dinosavr1.xs, dinosavr1.ys, 0);
    glTranslatef(dinosavr1.xt, dinosavr1.yt, 0);
    glRotatef(dinosavr1.xr, dinosavr1.yr, 1, 1);
    glColor3f(dinosavr1.rc, dinosavr1.gc, dinosavr1.bc);

    glBegin(GL_QUADS);
    /*glColor3f(.55, .17, .79);
    glVertex2f(.16, .6);
    glVertex2f(.28, .6);
    glVertex2f(.28, .68);
    glVertex2f(.16, .68);*/

    glColor3f(1, 1, 1);
    glVertex2f(-.32, 0);
    glVertex2f(-.27, 0);
    glVertex2f(-.27, -.34);
    glVertex2f(-.32, -.34);

    glColor3f(1, 1, 1);
    glVertex2f(-.27, 0);
    glVertex2f(-.25, 0);
    glVertex2f(-.25, -.55);
    glVertex2f(-.27, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(-.25, .03);
    glVertex2f(-.18, .03);
    glVertex2f(-.18, -.55);
    glVertex2f(-.25, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(-.18, -.47);
    glVertex2f(-.12, -.47);
    glVertex2f(-.12, -.55);
    glVertex2f(-.18, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(-.18, .1);
    glVertex2f(-.12, .1);
    glVertex2f(-.12, -.42);
    glVertex2f(-.18, -.42);

    glColor3f(1, 1, 1);
    glVertex2f(-.12, .1);
    glVertex2f(-.1, .1);
    glVertex2f(-.1, -.37);
    glVertex2f(-.12, -.37);

    glColor3f(1, 1, 1);
    glVertex2f(-.1, .17);
    glVertex2f(-.05, .17);
    glVertex2f(-.05, -.37);
    glVertex2f(-.1, -.37);

    glColor3f(1, 1, 1);
    glVertex2f(-.05, .17);
    glVertex2f(-.02, .17);
    glVertex2f(-.02, -.32);
    glVertex2f(-.05, -.32);

    glColor3f(1, 1, 1);
    glVertex2f(-.02, .17);
    glVertex2f(.01, .17);
    glVertex2f(.01, -.37);
    glVertex2f(-.02, -.37);

    glColor3f(1, 1, 1);
    glVertex2f(.01, .22);
    glVertex2f(.06, .22);
    glVertex2f(.06, -.37);
    glVertex2f(.01, -.37);

    glColor3f(1, 1, 1);
    glVertex2f(.06, .6);
    glVertex2f(.09, .6);
    glVertex2f(.09, -.55);
    glVertex2f(.06, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(.09, .63);
    glVertex2f(.13, .63);
    glVertex2f(.13, -.55);
    glVertex2f(.09, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(.13, .68);
    glVertex2f(.16, .68);
    glVertex2f(.16, -.55);
    glVertex2f(.13, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(.16, .68);
    glVertex2f(.19, .68);
    glVertex2f(.19, -.27);
    glVertex2f(.16, -.27);

    glColor3f(1, 1, 1);
    glVertex2f(.16, -.47);
    glVertex2f(.24, -.47);
    glVertex2f(.24, -.55);
    glVertex2f(.16, -.55);

    glColor3f(1, 1, 1);
    glVertex2f(.19, .52);
    glVertex2f(.22, .52);
    glVertex2f(.22, -.27);
    glVertex2f(.19, -.27);

    glColor3f(1, 1, 1);
    glVertex2f(.16, .68);
    glVertex2f(.28, .68);
    glVertex2f(.28, .6);
    glVertex2f(.16, .6);

    glColor3f(1, 1, 1);
    glVertex2f(.22, .52);
    glVertex2f(.28, .52);
    glVertex2f(.28, -.2);
    glVertex2f(.22, -.2);

    glColor3f(1, 1, 1);
    glVertex2f(.28, .68);
    glVertex2f(.34, .68);
    glVertex2f(.34, -.1);
    glVertex2f(.28, -.1);

    glColor3f(1, 1, 1);
    glVertex2f(.34, .12);
    glVertex2f(.37, .12);
    glVertex2f(.37, .03);
    glVertex2f(.34, .03);

    glColor3f(1, 1, 1);
    glVertex2f(.37, .12);
    glVertex2f(.44, .12);
    glVertex2f(.44, -.02);
    glVertex2f(.37, -.02);

    glColor3f(1, 1, 1);
    glVertex2f(.34, .68);
    glVertex2f(.39, .68);
    glVertex2f(.39, .22);
    glVertex2f(.34, .22);

    glColor3f(1, 1, 1);
    glVertex2f(.39, .28);
    glVertex2f(.55, .28);
    glVertex2f(.55, .22);
    glVertex2f(.39, .22);

    glColor3f(1, 1, 1);
    glVertex2f(.39, .68);
    glVertex2f(.6, .68);
    glVertex2f(.6, .33);
    glVertex2f(.39, .33);

    glColor3f(1, 1, 1);
    glVertex2f(.6, .66);
    glVertex2f(.63, .66);
    glVertex2f(.63, .33);
    glVertex2f(.6, .33);

    glColor3f(1, 1, 1);
    glVertex2f(.63, .63);
    glVertex2f(.67, .63);
    glVertex2f(.67, .33);
    glVertex2f(.63, .33);

    glColor3f(1, 1, 1);
    glVertex2f(.67, .6);
    glVertex2f(.7, .6);
    glVertex2f(.7, .33);
    glVertex2f(.67, .33);

    glEnd();
    glPopMatrix();

}

void drawtail1(Figure tail1) {

    glPushMatrix();
    glScalef(tail1.xs, tail1.ys, 0);

    glPushMatrix();
    glTranslatef(tail1.xt, 0.035 * sin(3 * tail1.yt + .9), 0);

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(-.57, .2);
    glVertex2f(-.5, .2);
    glVertex2f(-.5, -.15);
    glVertex2f(-.57, -.15);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail1.xt, 0.035 * sin(3 * tail1.yt + .7), 0);

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(-.5, .13);
    glVertex2f(-.44, .13);
    glVertex2f(-.44, -.18);
    glVertex2f(-.5, -.18);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail1.xt, 0.02 * sin(3 * tail1.yt + .5), 0);

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(-.44, .06);
    glVertex2f(-.39, .06);
    glVertex2f(-.39, -.24);
    glVertex2f(-.44, -.24);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail1.xt, 0.02 * sin(3 * tail1.yt + .3), 0);

    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(-.39, .0);
    glVertex2f(-.32, .0);
    glVertex2f(-.32, -.24);
    glVertex2f(-.39, -.24);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawdino1() {

    float phi = curTime * 0.001;

    glPushMatrix();
    Figure dinosavr1;
    dinosavr1.xs = 0.3;
    dinosavr1.ys = 0.3;
    dinosavr1.xt = 0.9;
    dinosavr1.yt = -0.05;
    dinosavr1.xr = 0;
    dinosavr1.yr = 0;
    dinosavr1.rc = 0;
    dinosavr1.gc = 0;
    dinosavr1.bc = 0;
    drawdinosavr1(dinosavr1);
    glPopMatrix();

    glPushMatrix();
    Figure tail1;
    tail1.xs = 0.3;
    tail1.ys = 0.3;
    tail1.xt = 0.9;
    tail1.yt = phi;
    tail1.xr = 0;
    tail1.yr = 0;
    tail1.rc = 0;
    tail1.gc = 0;
    tail1.bc = 0;
    drawtail1(tail1);
    glPopMatrix();

}

void drawdinosavr2(Figure dinosavr2) {

    glPushMatrix();
    glScalef(dinosavr2.xs, dinosavr2.ys, 0);
    glTranslatef(dinosavr2.xt, dinosavr2.yt, 0);
    glRotatef(dinosavr2.xr, dinosavr2.yr, 1, 1);
    glColor3f(dinosavr2.rc, dinosavr2.gc, dinosavr2.bc);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.25, -.2);
    glVertex2f(-.2, -.2);
    glVertex2f(-.2, -.53);
    glVertex2f(-.25, -.53);

    glColor3f(.35, .56, .35);
    glVertex2f(-.2, -.15);
    glVertex2f(-.15, -.15);
    glVertex2f(-.15, -.53);
    glVertex2f(-.2, -.53);

    glColor3f(.35, .56, .35);
    glVertex2f(-.15, -.15);
    glVertex2f(-.1, -.15);
    glVertex2f(-.1, -.53);
    glVertex2f(-.15, -.53);

    glColor3f(.59, .91, .06);
    glVertex2f(-.15, -.53);
    glVertex2f(.1, -.53);
    glVertex2f(.1, -.58);
    glVertex2f(-.15, -.58);

    glColor3f(.35, .56, .35);
    glVertex2f(.05, -.1);
    glVertex2f(-.1, -.1);
    glVertex2f(-.1, -.53);
    glVertex2f(.05, -.53);

    glColor3f(.35, .56, .35);
    glVertex2f(.05, -.1);
    glVertex2f(.1, -.1);
    glVertex2f(.1, -.53);
    glVertex2f(.05, -.53);

    glColor3f(.35, .56, .35);
    glVertex2f(.1, -.1);
    glVertex2f(.15, -.1);
    glVertex2f(.15, -.53);
    glVertex2f(.1, -.53);

    glColor3f(.35, .56, .35);
    glVertex2f(.15, -.15);
    glVertex2f(.2, -.15);
    glVertex2f(.2, -.53);
    glVertex2f(.15, -.53);

    glColor3f(.59, .91, .06);
    glVertex2f(.2, -.48);
    glVertex2f(.25, -.48);
    glVertex2f(.25, -.58);
    glVertex2f(.2, -.58);

    glColor3f(.59, .91, .06);
    glVertex2f(.25, -.43);
    glVertex2f(.3, -.43);
    glVertex2f(.3, -.53);
    glVertex2f(.25, -.53);

    glColor3f(.59, .91, .06);
    glVertex2f(.3, -.38);
    glVertex2f(.35, -.38);
    glVertex2f(.35, -.48);
    glVertex2f(.3, -.48);

    glColor3f(.35, .56, .35);
    glVertex2f(.2, -.48);
    glVertex2f(.25, -.48);
    glVertex2f(.25, -.1);
    glVertex2f(.2, -.1);

    glColor3f(.35, .56, .35);
    glVertex2f(.25, .6);
    glVertex2f(.3, .6);
    glVertex2f(.3, -.43);
    glVertex2f(.25, -.43);

    glColor3f(.35, .56, .35);
    glVertex2f(.2, .55);
    glVertex2f(.25, .55);
    glVertex2f(.25, .25);
    glVertex2f(.2, .25);

    glColor3f(.35, .56, .35);
    glVertex2f(.3, .65);
    glVertex2f(.35, .65);
    glVertex2f(.35, -.38);
    glVertex2f(.3, -.38);

    glColor3f(.59, .91, .06);
    glVertex2f(.35, .38);
    glVertex2f(.4, .38);
    glVertex2f(.4, -.43);
    glVertex2f(.35, -.43);

    glColor3f(.59, .91, .06);
    glVertex2f(.4, -.03);
    glVertex2f(.45, -.03);
    glVertex2f(.45, -.33);
    glVertex2f(.4, -.33);

    glColor3f(.35, .56, .35);
    glVertex2f(.35, .65);
    glVertex2f(.45, .65);
    glVertex2f(.45, .35);
    glVertex2f(.35, .35);

    glColor3f(.35, .56, .35);
    glVertex2f(.45, .65);
    glVertex2f(.5, .65);
    glVertex2f(.5, .3);
    glVertex2f(.45, .3);

    glColor3f(.35, .56, .35);
    glVertex2f(.5, .65);
    glVertex2f(.55, .65);
    glVertex2f(.55, .5);
    glVertex2f(.5, .5);

    glColor3f(.35, .56, .35);
    glVertex2f(.5, .45);
    glVertex2f(.55, .45);
    glVertex2f(.55, .3);
    glVertex2f(.5, .3);

    glColor3f(1, 1, 1);
    glVertex2f(.5, .5);
    glVertex2f(.55, .5);
    glVertex2f(.55, .45);
    glVertex2f(.5, .45);

    glColor3f(.35, .56, .35);
    glVertex2f(.55, .6);
    glVertex2f(.6, .6);
    glVertex2f(.6, .3);
    glVertex2f(.55, .3);

    glColor3f(.35, .56, .35);
    glVertex2f(.6, .55);
    glVertex2f(.65, .55);
    glVertex2f(.65, .35);
    glVertex2f(.6, .35);
    glEnd();

    glPopMatrix();
}

void drawtail2(Figure tail2) {

    glPushMatrix();
    glScalef(tail2.xs, tail2.ys, 1);

    glPushMatrix();
    glTranslatef(tail2.xt, 0.045 * sin(3 * tail2.yt + 1.3), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.65, -.1);
    glVertex2f(-.6, -.1);
    glVertex2f(-.6, -.28);
    glVertex2f(-.65, -.28);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail2.xt, 0.035 * sin(3 * tail2.yt + 1.1), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.6, -.15);
    glVertex2f(-.55, -.15);
    glVertex2f(-.55, -.38);
    glVertex2f(-.6, -.38);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail2.xt, 0.025 * sin(3 * tail2.yt + .9), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.55, -.2);
    glVertex2f(-.5, -.2);
    glVertex2f(-.5, -.43);
    glVertex2f(-.55, -.43);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail2.xt, 0.025 * sin(3 * tail2.yt + .7), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.5, -.25);
    glVertex2f(-.45, -.25);
    glVertex2f(-.45, -.43);
    glVertex2f(-.5, -.43);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail2.xt, 0.025 * sin(3 * tail2.yt + .5), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.45, -.3);
    glVertex2f(-.35, -.3);
    glVertex2f(-.35, -.48);
    glVertex2f(-.45, -.48);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail2.xt, 0.01 * sin(3 * tail2.yt + .3), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.35, -.3);
    glVertex2f(-.3, -.3);
    glVertex2f(-.3, -.53);
    glVertex2f(-.35, -.53);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail2.xt, 0.01 * sin(3 * tail2.yt + .1), 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);
    glVertex2f(-.3, -.25);
    glVertex2f(-.25, -.25);
    glVertex2f(-.25, -.53);
    glVertex2f(-.3, -.53);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawd2l1(Figure d2l1) {

    glPushMatrix();
    glScalef(d2l1.xs, d2l1.ys, 1);

    glPushMatrix();
    glTranslatef(0.021 * sin(3 * d2l1.xt + .45), d2l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.36, .3, .13); //лапка 1
    glVertex2f(-.2, -.68);
    glVertex2f(-.15, -.68);
    glVertex2f(-.15, -.73);
    glVertex2f(-.2, -.73);

    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.25, -.68);
    glVertex2f(-.2, -.68);
    glVertex2f(-.2, -.73);
    glVertex2f(-.25, -.73);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.019 * sin(3 * d2l1.xt + .47), d2l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.2, -.63);
    glVertex2f(-.15, -.63);
    glVertex2f(-.15, -.68);
    glVertex2f(-.2, -.68);

    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.25, -.63);
    glVertex2f(-.2, -.63);
    glVertex2f(-.2, -.68);
    glVertex2f(-.25, -.68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.017 * sin(3 * d2l1.xt + .45), d2l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.2, -.58);
    glVertex2f(-.15, -.58);
    glVertex2f(-.15, -.63);
    glVertex2f(-.2, -.63);

    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.25, -.58);
    glVertex2f(-.2, -.58);
    glVertex2f(-.2, -.63);
    glVertex2f(-.25, -.63);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d2l1.xt + .45), d2l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.25, -.53);
    glVertex2f(-.2, -.53);
    glVertex2f(-.2, -.58);
    glVertex2f(-.25, -.58);

    glColor3f(.35, .56, .35); //лапка 1
    glVertex2f(-.2, -.53);
    glVertex2f(-.15, -.53);
    glVertex2f(-.15, -.58);
    glVertex2f(-.2, -.58);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawd2l2(Figure d2l2) {

    glPushMatrix();
    glScalef(d2l2.xs, d2l2.ys, 1);

    glPushMatrix();
    glTranslatef(0.019 * sin(3 * d2l2.xt + .45), d2l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.36, .3, .13);  //лапка 2
    glVertex2f(0, -.68);
    glVertex2f(.05, -.68);
    glVertex2f(.05, -.73);
    glVertex2f(0, -.73);

    glColor3f(.35, .56, .35); //лапка 2
    glVertex2f(-.05, -.68);
    glVertex2f(0, -.68);
    glVertex2f(0, -.73);
    glVertex2f(-.05, -.73);

    glColor3f(.35, .56, .35); //лапка 2
    glVertex2f(-.1, -.68);
    glVertex2f(-.05, -.68);
    glVertex2f(-.05, -.73);
    glVertex2f(-.1, -.73);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.017 * sin(3 * d2l2.xt + .47), d2l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);  //лапка 2
    glVertex2f(0, -.63);
    glVertex2f(.05, -.63);
    glVertex2f(.05, -.68);
    glVertex2f(0, -.68);

    glColor3f(.35, .56, .35); //лапка 2
    glVertex2f(-.05, -.63);
    glVertex2f(0, -.63);
    glVertex2f(0, -.68);
    glVertex2f(-.05, -.68);

    glColor3f(.35, .56, .35); //лапка 2
    glVertex2f(-.1, -.63);
    glVertex2f(-.05, -.63);
    glVertex2f(-.05, -.68);
    glVertex2f(-.1, -.68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d2l2.xt + .45), d2l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35);  //лапка 2
    glVertex2f(0, -.58);
    glVertex2f(.05, -.58);
    glVertex2f(.05, -.63);
    glVertex2f(0, -.63);

    glColor3f(.35, .56, .35);  //лапка 2
    glVertex2f(-.05, -.58);
    glVertex2f(0, -.58);
    glVertex2f(0, -.63);
    glVertex2f(-.05, -.63);

    glColor3f(.35, .56, .35);  //лапка 2
    glVertex2f(-.1, -.58);
    glVertex2f(-.05, -.58);
    glVertex2f(-.05, -.63);
    glVertex2f(-.1, -.63);
    glEnd();
    glPopMatrix();


    glPopMatrix();
}

void drawd2l3(Figure d2l3) {

    glPushMatrix();
    glScalef(d2l3.xs, d2l3.ys, 1);

    glPushMatrix();
    glTranslatef(0.021 * sin(3 * d2l3.xt + .45), d2l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.36, .3, .13); //лапка 3
    glVertex2f(.15, -.68);
    glVertex2f(.2, -.68);
    glVertex2f(.2, -.73);
    glVertex2f(.15, -.73);

    glColor3f(.35, .56, .35); //лапка 3 
    glVertex2f(.1, -.68);
    glVertex2f(.15, -.68);
    glVertex2f(.15, -.73);
    glVertex2f(.1, -.73);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.019 * sin(3 * d2l3.xt + .47), d2l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); // лапка 3
    glVertex2f(.15, -.63);
    glVertex2f(.2, -.63);
    glVertex2f(.2, -.68);
    glVertex2f(.15, -.68);

    glColor3f(.35, .56, .35); //лапка 3 
    glVertex2f(.1, -.63);
    glVertex2f(.15, -.63);
    glVertex2f(.15, -.68);
    glVertex2f(.1, -.68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.017 * sin(3 * d2l3.xt + .45), d2l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); // лапка 3
    glVertex2f(.15, -.58);
    glVertex2f(.2, -.58);
    glVertex2f(.2, -.63);
    glVertex2f(.15, -.63);

    glColor3f(.35, .56, .35); //лапка 3 
    glVertex2f(.1, -.58);
    glVertex2f(.15, -.58);
    glVertex2f(.15, -.63);
    glVertex2f(.1, -.63);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d2l3.xt + .45), d2l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); // лапка 3
    glVertex2f(.15, -.53);
    glVertex2f(.2, -.53);
    glVertex2f(.2, -.58);
    glVertex2f(.15, -.58);

    glColor3f(.35, .56, .35); //лапка 3 
    glVertex2f(.1, -.53);
    glVertex2f(.15, -.53);
    glVertex2f(.15, -.58);
    glVertex2f(.1, -.58);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawd2l4(Figure d2l4) {

    glPushMatrix();
    glScalef(d2l4.xs, d2l4.ys, 1);

    glPushMatrix();
    glTranslatef(0.023 * sin(3 * d2l4.xt + .45), d2l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.36, .3, .13); //лапка 4
    glVertex2f(.3, -.68);
    glVertex2f(.35, -.68);
    glVertex2f(.35, -.73);
    glVertex2f(.3, -.73);

    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.25, -.68);
    glVertex2f(.3, -.68);
    glVertex2f(.3, -.73);
    glVertex2f(.25, -.73);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.021 * sin(3 * d2l4.xt + .47), d2l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.3, -.63);
    glVertex2f(.35, -.63);
    glVertex2f(.35, -.68);
    glVertex2f(.3, -.68);

    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.25, -.63);
    glVertex2f(.3, -.63);
    glVertex2f(.3, -.68);
    glVertex2f(.25, -.68);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.019 * sin(3 * d2l4.xt + .45), d2l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.3, -.58);
    glVertex2f(.35, -.58);
    glVertex2f(.35, -.63);
    glVertex2f(.3, -.63);

    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.25, -.58);
    glVertex2f(.3, -.58);
    glVertex2f(.3, -.63);
    glVertex2f(.25, -.63);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.017 * sin(3 * d2l4.xt + .45), d2l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.3, -.53);
    glVertex2f(.35, -.53);
    glVertex2f(.35, -.58);
    glVertex2f(.3, -.58);

    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.25, -.53);
    glVertex2f(.3, -.53);
    glVertex2f(.3, -.58);
    glVertex2f(.25, -.58);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d2l4.xt + .45), d2l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.35, .56, .35); //лапка 4
    glVertex2f(.3, -.48);
    glVertex2f(.35, -.48);
    glVertex2f(.35, -.53);
    glVertex2f(.3, -.53);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawdino2() {

    float phi = curTime * 0.001;

    glPushMatrix();
    Figure dinosavr2;
    dinosavr2.xs = 0.4;
    dinosavr2.ys = 0.4;
    dinosavr2.xt = 0;
    dinosavr2.yt = 0;
    dinosavr2.xr = 0;
    dinosavr2.yr = 0;
    drawdinosavr2(dinosavr2);
    glPopMatrix();

    glPushMatrix();
    Figure tail2;
    tail2.xs = 0.4;
    tail2.ys = 0.4;
    tail2.xt = 0;
    tail2.yt = phi;
    tail2.xr = 0;
    tail2.yr = 0;
    drawtail2(tail2);
    glPopMatrix();

    glPushMatrix();
    Figure d2l1;
    d2l1.xs = 0.4;
    d2l1.ys = 0.4;
    d2l1.xt = phi;
    d2l1.yt = 0;
    d2l1.xr = 0;
    d2l1.yr = 0;
    drawd2l1(d2l1);
    glPopMatrix();

    glPushMatrix();
    Figure d2l2;
    d2l2.xs = 0.4;
    d2l2.ys = 0.4;
    d2l2.xt = phi;
    d2l2.yt = 0;
    d2l2.xr = 0;
    d2l2.yr = 0;
    drawd2l2(d2l2);
    glPopMatrix();

    glPushMatrix();
    Figure d2l3;
    d2l3.xs = 0.4;
    d2l3.ys = 0.4;
    d2l3.xt = phi;
    d2l3.yt = 0;
    d2l3.xr = 0;
    d2l3.yr = 0;
    drawd2l3(d2l3);
    glPopMatrix();

    glPushMatrix();
    Figure d2l4;
    d2l4.xs = 0.4;
    d2l4.ys = 0.4;
    d2l4.xt = phi;
    d2l4.yt = 0;
    d2l4.xr = 0;
    d2l4.yr = 0;
    drawd2l4(d2l4);
    glPopMatrix();
}

void drawMovingdino2(time_t curTime) {
    float pos = curTime * 0.000035;

    for (int i = 0; i < 1; i++) {
        glPushMatrix();
        glTranslatef(-.8 + pos + 1.5 * (-i), -.3, 0);
        drawdino2();
        glPopMatrix();
    }
}

void drawdinosavr3(Figure dinosavr3) {

    glPushMatrix();
    glScalef(dinosavr3.xs, dinosavr3.ys, 0);
    glTranslatef(dinosavr3.xt, dinosavr3.yt, 0);
    glRotated(dinosavr3.xr, dinosavr3.yr, 1, 1);
    glColor3f(dinosavr3.rc, dinosavr3.gc, dinosavr3.bc);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);
    glVertex2f(-1, 0);
    glVertex2f(-.95, 0);
    glVertex2f(-.95, -.05);
    glVertex2f(-1, -.05);

    glColor3f(.11, .11, .09);
    glVertex2f(-.2, -.35);
    glVertex2f(-.15, -.35);
    glVertex2f(-.15, -.4);
    glVertex2f(-.2, -.4);

    glColor3f(1, .9, .7);
    glVertex2f(-.95, 0);
    glVertex2f(-.9, 0);
    glVertex2f(-.9, -.05);
    glVertex2f(-.95, -.05);

    glColor3f(.11, .11, .09);
    glVertex2f(-.95, .05);
    glVertex2f(-.75, .05);
    glVertex2f(-.75, 0);
    glVertex2f(-.95, 0);

    glColor3f(.11, .11, .09);
    glVertex2f(-.95, -.05);
    glVertex2f(-.9, -.05);
    glVertex2f(-.9, -.1);
    glVertex2f(-.95, -.1);

    glColor3f(.93, .84, .67);
    glVertex2f(-.9, 0);
    glVertex2f(-.85, 0);
    glVertex2f(-.85, -.05);
    glVertex2f(-.9, -.05);

    glColor3f(.81, .69, .44);
    glVertex2f(-.9, -.05);
    glVertex2f(-.85, -.05);
    glVertex2f(-.85, -.1);
    glVertex2f(-.9, -.1);

    glColor3f(.81, .69, .44);
    glVertex2f(-.85, 0);
    glVertex2f(-.8, 0);
    glVertex2f(-.8, -.05);
    glVertex2f(-.85, -.05);

    glColor3f(.11, .11, .09);
    glVertex2f(-.9, -.1);
    glVertex2f(-.85, -.1);
    glVertex2f(-.85, -.15);
    glVertex2f(-.9, -.15);

    glColor3f(.11, .11, .09);
    glVertex2f(-.95, -.15);
    glVertex2f(-.9, -.15);
    glVertex2f(-.9, -.35);
    glVertex2f(-.95, -.35);

    glColor3f(.11, .11, .09);
    glVertex2f(-.9, -.35);
    glVertex2f(-.8, -.35);
    glVertex2f(-.8, -.4);
    glVertex2f(-.9, -.4);

    glColor3f(.11, .11, .09);
    glVertex2f(-.85, -.3);
    glVertex2f(-.65, -.3);
    glVertex2f(-.65, -.35);
    glVertex2f(-.85, -.35);

    glColor3f(.26, .95, .09);
    glVertex2f(-.9, -.15);
    glVertex2f(-.85, -.15);
    glVertex2f(-.85, -.2);
    glVertex2f(-.9, -.2);

    glColor3f(.26, .95, .09);
    glVertex2f(-.85, -.1);
    glVertex2f(-.8, -.1);
    glVertex2f(-.8, -.15);
    glVertex2f(-.85, -.15);

    glColor3f(.34, .74, .24);
    glVertex2f(-.85, -.15);
    glVertex2f(-.8, -.15);
    glVertex2f(-.8, -.2);
    glVertex2f(-.85, -.2);

    glColor3f(.34, .74, .24);
    glVertex2f(-.9, -.2);
    glVertex2f(-.85, -.2);
    glVertex2f(-.85, -.25);
    glVertex2f(-.9, -.25);

    glColor3f(.12, .36, .06);
    glVertex2f(-.9, -.25);
    glVertex2f(-.85, -.25);
    glVertex2f(-.85, -.35);
    glVertex2f(-.9, -.35);

    glColor3f(.12, .36, .06);
    glVertex2f(-.85, -.2);
    glVertex2f(-.7, -.2);
    glVertex2f(-.7, -.25);
    glVertex2f(-.85, -.25);

    glColor3f(.13, .27, .09);
    glVertex2f(-.85, -.05);
    glVertex2f(-.8, -.05);
    glVertex2f(-.8, -.1);
    glVertex2f(-.85, -.1);

    glColor3f(.13, .27, .09);
    glVertex2f(-.8, 0);
    glVertex2f(-.75, 0);
    glVertex2f(-.75, -.05);
    glVertex2f(-.8, -.05);

    glColor3f(.13, .27, .09);
    glVertex2f(-.8, -.1);
    glVertex2f(-.75, -.1);
    glVertex2f(-.75, -.2);
    glVertex2f(-.8, -.2);

    glColor3f(.13, .27, .09);
    glVertex2f(-.85, -.25);
    glVertex2f(-.65, -.25);
    glVertex2f(-.65, -.3);
    glVertex2f(-.85, -.3);

    glColor3f(.26, .95, .09);
    glVertex2f(-.8, -.05);
    glVertex2f(-.75, -.05);
    glVertex2f(-.75, -.1);
    glVertex2f(-.8, -.1);

    glColor3f(.26, .95, .09);
    glVertex2f(-.75, .05);
    glVertex2f(-.7, .05);
    glVertex2f(-.7, -.05);
    glVertex2f(-.75, -.05);

    glColor3f(.11, .11, .09);
    glVertex2f(-.75, .15);
    glVertex2f(-.8, .15);
    glVertex2f(-.8, .05);
    glVertex2f(-.75, .05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.75, -.05);
    glVertex2f(-.55, -.05);
    glVertex2f(-.55, -.1);
    glVertex2f(-.75, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(-.75, -.1);
    glVertex2f(-.6, -.1);
    glVertex2f(-.6, -.2);
    glVertex2f(-.75, -.2);

    glColor3f(.12, .36, .06);
    glVertex2f(-.6, -.1);
    glVertex2f(-.5, -.1);
    glVertex2f(-.5, -.15);
    glVertex2f(-.6, -.15);

    glColor3f(.12, .36, .06);
    glVertex2f(-.55, -.05);
    glVertex2f(-.5, -.05);
    glVertex2f(-.5, -.1);
    glVertex2f(-.55, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(-.5, .2);
    glVertex2f(-.45, .2);
    glVertex2f(-.45, -.1);
    glVertex2f(-.5, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(-.55, .3);
    glVertex2f(-.5, .3);
    glVertex2f(-.5, .1);
    glVertex2f(-.55, .1);

    glColor3f(.34, .74, .24);
    glVertex2f(-.55, .1);
    glVertex2f(-.5, .1);
    glVertex2f(-.5, -.05);
    glVertex2f(-.55, -.05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.7, .05);
    glVertex2f(-.65, .05);
    glVertex2f(-.65, -.05);
    glVertex2f(-.7, -.05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.65, .1);
    glVertex2f(-.55, .1);
    glVertex2f(-.55, .05);
    glVertex2f(-.65, .05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.6, .15);
    glVertex2f(-.55, .15);
    glVertex2f(-.55, .1);
    glVertex2f(-.6, .1);

    glColor3f(.11, .11, .09); //глаз
    glVertex2f(-.6, .05);
    glVertex2f(-.55, .05);
    glVertex2f(-.55, 0);
    glVertex2f(-.6, 0);

    glColor3f(1, 1, 1); //глаз
    glVertex2f(-.65, .05);
    glVertex2f(-.6, .05);
    glVertex2f(-.6, -.05);
    glVertex2f(-.65, -.05);

    glColor3f(1, 1, 1); //глаз
    glVertex2f(-.6, 0);
    glVertex2f(-.55, 0);
    glVertex2f(-.55, -.05);
    glVertex2f(-.6, -.05);

    glColor3f(.13, .27, .09);
    glVertex2f(-.75, .1);
    glVertex2f(-.65, .1);
    glVertex2f(-.65, .05);
    glVertex2f(-.75, .05);

    glColor3f(.13, .27, .09);
    glVertex2f(-.65, .15);
    glVertex2f(-.6, .15);
    glVertex2f(-.6, .1);
    glVertex2f(-.65, .1);

    glColor3f(.13, .27, .09);
    glVertex2f(-.6, .25);
    glVertex2f(-.55, .25);
    glVertex2f(-.55, .15);
    glVertex2f(-.6, .15);

    glColor3f(.34, .74, .24);
    glVertex2f(-.6, .35);
    glVertex2f(-.55, .35);
    glVertex2f(-.55, .25);
    glVertex2f(-.6, .25);

    glColor3f(.34, .74, .24);
    glVertex2f(-.55, .35);
    glVertex2f(-.45, .35);
    glVertex2f(-.45, .3);
    glVertex2f(-.55, .3);

    glColor3f(.34, .74, .24);
    glVertex2f(-.5, .3);
    glVertex2f(-.45, .3);
    glVertex2f(-.45, .2);
    glVertex2f(-.5, .2);

    glColor3f(.26, .95, .09);
    glVertex2f(-.6, .4);
    glVertex2f(-.45, .4);
    glVertex2f(-.45, .35);
    glVertex2f(-.6, .35);

    glColor3f(.11, .11, .09);
    glVertex2f(-.6, .45);
    glVertex2f(-.45, .45);
    glVertex2f(-.45, .4);
    glVertex2f(-.6, .4);

    glColor3f(.11, .11, .09);
    glVertex2f(-.65, .4);
    glVertex2f(-.6, .4);
    glVertex2f(-.6, .25);
    glVertex2f(-.65, .25);

    glColor3f(.11, .11, .09);
    glVertex2f(-.7, .3);
    glVertex2f(-.65, .3);
    glVertex2f(-.65, .25);
    glVertex2f(-.7, .25);

    glColor3f(.11, .11, .09);
    glVertex2f(-.85, .25);
    glVertex2f(-.8, .25);
    glVertex2f(-.8, .15);
    glVertex2f(-.85, .15);

    glColor3f(.11, .11, .09);
    glVertex2f(-.9, .3);
    glVertex2f(-.85, .3);
    glVertex2f(-.85, .25);
    glVertex2f(-.9, .25);

    glColor3f(.11, .11, .09);
    glVertex2f(-.95, .35);
    glVertex2f(-.9, .35);
    glVertex2f(-.9, .3);
    glVertex2f(-.95, .3);

    glColor3f(.11, .11, .09);
    glVertex2f(-.9, .4);
    glVertex2f(-.8, .4);
    glVertex2f(-.8, .35);
    glVertex2f(-.9, .35);

    glColor3f(.11, .11, .09);
    glVertex2f(-.8, .35);
    glVertex2f(-.7, .35);
    glVertex2f(-.7, .3);
    glVertex2f(-.8, .3);

    glColor3f(1, .9, .7);
    glVertex2f(-.85, .35);
    glVertex2f(-.8, .35);
    glVertex2f(-.8, .3);
    glVertex2f(-.85, .3);

    glColor3f(1, .9, .7);
    glVertex2f(-.75, .3);
    glVertex2f(-.7, .3);
    glVertex2f(-.7, .25);
    glVertex2f(-.75, .25);

    glColor3f(1, .9, .7);
    glVertex2f(-.7, .25);
    glVertex2f(-.65, .25);
    glVertex2f(-.65, .2);
    glVertex2f(-.7, .2);

    glColor3f(.93, .84, .67);
    glVertex2f(-.9, .35);
    glVertex2f(-.85, .35);
    glVertex2f(-.85, .3);
    glVertex2f(-.9, .3);

    glColor3f(.93, .84, .67);
    glVertex2f(-.8, .3);
    glVertex2f(-.75, .3);
    glVertex2f(-.75, .25);
    glVertex2f(-.8, .25);

    glColor3f(.93, .84, .67);
    glVertex2f(-.75, .25);
    glVertex2f(-.7, .25);
    glVertex2f(-.7, .2);
    glVertex2f(-.75, .2);

    glColor3f(.93, .84, .67);
    glVertex2f(-.7, .2);
    glVertex2f(-.6, .2);
    glVertex2f(-.6, .15);
    glVertex2f(-.7, .15);

    glColor3f(.93, .84, .67);
    glVertex2f(-.65, .25);
    glVertex2f(-.6, .25);
    glVertex2f(-.6, .2);
    glVertex2f(-.65, .2);

    glColor3f(.81, .69, .44);
    glVertex2f(-.85, .3);
    glVertex2f(-.8, .3);
    glVertex2f(-.8, .25);
    glVertex2f(-.85, .25);

    glColor3f(.81, .69, .44);
    glVertex2f(-.8, .25);
    glVertex2f(-.75, .25);
    glVertex2f(-.75, .15);
    glVertex2f(-.8, .15);

    glColor3f(.81, .69, .44);
    glVertex2f(-.75, .2);
    glVertex2f(-.7, .2);
    glVertex2f(-.7, .1);
    glVertex2f(-.75, .1);

    glColor3f(.81, .69, .44);
    glVertex2f(-.7, .15);
    glVertex2f(-.65, .15);
    glVertex2f(-.65, .1);
    glVertex2f(-.7, .1);

    glColor3f(.11, .11, .09);
    glVertex2f(-.65, -.25);
    glVertex2f(-.55, -.25);
    glVertex2f(-.55, -.3);
    glVertex2f(-.65, -.3);

    glColor3f(.11, .11, .09);
    glVertex2f(-.6, -.3);
    glVertex2f(-.55, -.3);
    glVertex2f(-.55, -.35);
    glVertex2f(-.6, -.35);

    glColor3f(.11, .11, .09);
    glVertex2f(.25, -.05);
    glVertex2f(.3, -.05);
    glVertex2f(.3, -.1);
    glVertex2f(.25, -.1);

    glColor3f(.11, .11, .09);
    glVertex2f(.2, 0);
    glVertex2f(.25, 0);
    glVertex2f(.25, -.05);
    glVertex2f(.2, -.05);

    glColor3f(.11, .11, .09);
    glVertex2f(.15, .05);
    glVertex2f(.2, .05);
    glVertex2f(.2, 0);
    glVertex2f(.15, 0);

    glColor3f(.11, .11, .09);
    glVertex2f(.1, .1);
    glVertex2f(.15, .1);
    glVertex2f(.15, .05);
    glVertex2f(.1, .05);

    glColor3f(.11, .11, .09);
    glVertex2f(0, .15);
    glVertex2f(.1, .15);
    glVertex2f(.1, .1);
    glVertex2f(0, .1);

    glColor3f(.11, .11, .09);
    glVertex2f(-.3, .2);
    glVertex2f(0, .2);
    glVertex2f(0, .15);
    glVertex2f(-.3, .15);

    glColor3f(.11, .11, .09);
    glVertex2f(-.35, .3);
    glVertex2f(-.3, .3);
    glVertex2f(-.3, .2);
    glVertex2f(-.35, .2);

    glColor3f(.11, .11, .09);
    glVertex2f(-.4, .35);
    glVertex2f(-.35, .35);
    glVertex2f(-.35, .3);
    glVertex2f(-.4, .3);

    glColor3f(.11, .11, .09);
    glVertex2f(-.45, .4);
    glVertex2f(-.4, .4);
    glVertex2f(-.4, .35);
    glVertex2f(-.45, .35);

    glColor3f(.26, .95, .09);
    glVertex2f(-.45, .35);
    glVertex2f(-.4, .35);
    glVertex2f(-.4, .3);
    glVertex2f(-.45, .3);

    glColor3f(.26, .95, .09);
    glVertex2f(-.4, .3);
    glVertex2f(-.35, .3);
    glVertex2f(-.35, .25);
    glVertex2f(-.4, .25);

    glColor3f(.26, .95, .09);
    glVertex2f(-.2, .15);
    glVertex2f(0, .15);
    glVertex2f(0, .1);
    glVertex2f(-.2, .1);

    glColor3f(.26, .95, .09);
    glVertex2f(0, .1);
    glVertex2f(.1, .1);
    glVertex2f(.1, .05);
    glVertex2f(0, .05);

    glColor3f(.26, .95, .09);
    glVertex2f(.1, .05);
    glVertex2f(.15, .05);
    glVertex2f(.15, 0);
    glVertex2f(.1, 0);

    glColor3f(.26, .95, .09);
    glVertex2f(.15, 0);
    glVertex2f(.2, 0);
    glVertex2f(.2, -.05);
    glVertex2f(.15, -.05);

    glColor3f(.26, .95, .09);
    glVertex2f(.2, -.05);
    glVertex2f(.25, -.05);
    glVertex2f(.25, -.1);
    glVertex2f(.2, -.1);

    glColor3f(.34, .74, .24);
    glVertex2f(-.45, .3);
    glVertex2f(-.4, .3);
    glVertex2f(-.4, .25);
    glVertex2f(-.45, .25);

    glColor3f(.34, .74, .24);
    glVertex2f(-.45, .2);
    glVertex2f(-.4, .2);
    glVertex2f(-.4, .15);
    glVertex2f(-.45, .15);

    glColor3f(.34, .74, .24);
    glVertex2f(-.4, .25);
    glVertex2f(-.35, .25);
    glVertex2f(-.35, .2);
    glVertex2f(-.4, .2);

    glColor3f(.34, .74, .24);
    glVertex2f(-.3, .2);
    glVertex2f(-.35, .2);
    glVertex2f(-.35, .1);
    glVertex2f(-.3, .1);

    glColor3f(.34, .74, .24);
    glVertex2f(-.4, .1);
    glVertex2f(-.35, .1);
    glVertex2f(-.35, .05);
    glVertex2f(-.4, .05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.3, .15);
    glVertex2f(-.2, .15);
    glVertex2f(-.2, .05);
    glVertex2f(-.3, .05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.35, .05);
    glVertex2f(-.2, .05);
    glVertex2f(-.2, 0);
    glVertex2f(-.35, 0);

    glColor3f(.34, .74, .24);
    glVertex2f(-.2, .1);
    glVertex2f(0, .1);
    glVertex2f(0, .05);
    glVertex2f(-.2, .05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.15, .05);
    glVertex2f(-.1, .05);
    glVertex2f(-.1, 0);
    glVertex2f(-.15, 0);

    glColor3f(.34, .74, .24);
    glVertex2f(-.05, .05);
    glVertex2f(.1, .05);
    glVertex2f(.1, 0);
    glVertex2f(-.05, 0);

    glColor3f(.34, .74, .24);
    glVertex2f(-.2, 0);
    glVertex2f(-.15, 0);
    glVertex2f(-.15, -.05);
    glVertex2f(-.2, -.05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.1, 0);
    glVertex2f(-.05, 0);
    glVertex2f(-.05, -.05);
    glVertex2f(-.1, -.05);

    glColor3f(.34, .74, .24);
    glVertex2f(-.05, -.05);
    glVertex2f(0, -.05);
    glVertex2f(0, -.1);
    glVertex2f(-.05, -.1);

    glColor3f(.34, .74, .24);
    glVertex2f(0, 0);
    glVertex2f(.05, 0);
    glVertex2f(.05, -.05);
    glVertex2f(0, -.05);

    glColor3f(.34, .74, .24);
    glVertex2f(.05, -.05);
    glVertex2f(.1, -.05);
    glVertex2f(.1, -.1);
    glVertex2f(.05, -.1);

    glColor3f(.34, .74, .24);
    glVertex2f(.1, 0);
    glVertex2f(.15, 0);
    glVertex2f(.15, -.05);
    glVertex2f(.1, -.05);

    glColor3f(.34, .74, .24);
    glVertex2f(.15, -.05);
    glVertex2f(.2, -.05);
    glVertex2f(.2, -.1);
    glVertex2f(.15, -.1);

    glColor3f(.34, .74, .24);
    glVertex2f(.1, -.1);
    glVertex2f(.15, -.1);
    glVertex2f(.15, -.15);
    glVertex2f(.1, -.15);

    glColor3f(.34, .74, .24);
    glVertex2f(.2, -.1);
    glVertex2f(.3, -.1);
    glVertex2f(.3, -.15);
    glVertex2f(.2, -.15);

    glColor3f(.34, .74, .24);
    glVertex2f(.15, -.15);
    glVertex2f(.2, -.15);
    glVertex2f(.2, -.2);
    glVertex2f(.15, -.2);

    glColor3f(.34, .74, .24);
    glVertex2f(.25, -.15);
    glVertex2f(.3, -.15);
    glVertex2f(.3, -.2);
    glVertex2f(.25, -.2);

    glColor3f(.34, .74, .24);
    glVertex2f(.1, -.2);
    glVertex2f(.15, -.2);
    glVertex2f(.15, -.25);
    glVertex2f(.1, -.25);

    glColor3f(.34, .74, .24);
    glVertex2f(.2, -.2);
    glVertex2f(.25, -.2);
    glVertex2f(.25, -.25);
    glVertex2f(.2, -.25);

    glColor3f(.34, .74, .24);
    glVertex2f(.15, -.25);
    glVertex2f(.2, -.25);
    glVertex2f(.2, -.35);
    glVertex2f(.15, -.35);

    glColor3f(.34, .74, .24);
    glVertex2f(.2, -.35);
    glVertex2f(.25, -.35);
    glVertex2f(.25, -.4);
    glVertex2f(.2, -.4);

    glColor3f(.34, .74, .24);
    glVertex2f(-.35, -.05);
    glVertex2f(-.3, -.05);
    glVertex2f(-.3, -.1);
    glVertex2f(-.35, -.1);

    glColor3f(.34, .74, .24);
    glVertex2f(-.35, -.25);
    glVertex2f(-.3, -.25);
    glVertex2f(-.3, -.3);
    glVertex2f(-.35, -.3);

    glColor3f(.34, .74, .24);
    glVertex2f(-.3, -.3);
    glVertex2f(-.25, -.3);
    glVertex2f(-.25, -.35);
    glVertex2f(-.3, -.35);

    glColor3f(.12, .36, .06);
    glVertex2f(-.55, -.3);
    glVertex2f(-.5, -.3);
    glVertex2f(-.5, -.35);
    glVertex2f(-.55, -.35);

    glColor3f(.12, .36, .06);
    glVertex2f(-.45, .15);
    glVertex2f(-.4, .15);
    glVertex2f(-.4, -.15);
    glVertex2f(-.45, -.15);

    glColor3f(.12, .36, .06);
    glVertex2f(-.45, .25);
    glVertex2f(-.4, .25);
    glVertex2f(-.4, .2);
    glVertex2f(-.45, .2);

    glColor3f(.12, .36, .06);
    glVertex2f(-.4, .2);
    glVertex2f(-.35, .2);
    glVertex2f(-.35, .1);
    glVertex2f(-.4, .1);

    glColor3f(.12, .36, .06);
    glVertex2f(-.4, .05);
    glVertex2f(-.35, .05);
    glVertex2f(-.35, -.2);
    glVertex2f(-.4, -.2);

    glColor3f(.12, .36, .06);
    glVertex2f(-.4, -.3);
    glVertex2f(-.3, -.3);
    glVertex2f(-.3, -.35);
    glVertex2f(-.4, -.35);

    glColor3f(.12, .36, .06);
    glVertex2f(-.35, -.1);
    glVertex2f(-.3, -.1);
    glVertex2f(-.3, -.15);
    glVertex2f(-.35, -.15);

    glColor3f(.12, .36, .06);
    glVertex2f(-.35, 0);
    glVertex2f(-.3, 0);
    glVertex2f(-.3, -.05);
    glVertex2f(-.35, -.05);

    glColor3f(.12, .36, .06);
    glVertex2f(-.35, .1);
    glVertex2f(-.3, .1);
    glVertex2f(-.3, .05);
    glVertex2f(-.35, .05);

    glColor3f(.12, .36, .06);
    glVertex2f(-.3, 0);
    glVertex2f(-.2, 0);
    glVertex2f(-.2, -.1);
    glVertex2f(-.3, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(-.3, -.15);
    glVertex2f(-.25, -.15);
    glVertex2f(-.25, -.2);
    glVertex2f(-.3, -.2);

    glColor3f(.12, .36, .06);
    glVertex2f(-.25, -.2);
    glVertex2f(-.2, -.2);
    glVertex2f(-.2, -.25);
    glVertex2f(-.25, -.25);

    glColor3f(.12, .36, .06);
    glVertex2f(-.25, -.1);
    glVertex2f(.1, -.1);
    glVertex2f(.1, -.15);
    glVertex2f(-.25, -.15);

    glColor3f(.12, .36, .06);
    glVertex2f(-.2, -.05);
    glVertex2f(-.05, -.05);
    glVertex2f(-.05, -.1);
    glVertex2f(-.2, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(-.15, 0);
    glVertex2f(-.1, 0);
    glVertex2f(-.1, -.05);
    glVertex2f(-.15, -.05);

    glColor3f(.12, .36, .06);
    glVertex2f(-.2, .05);
    glVertex2f(-.15, .05);
    glVertex2f(-.15, 0);
    glVertex2f(-.2, 0);

    glColor3f(.12, .36, .06);
    glVertex2f(-.1, .05);
    glVertex2f(-.05, .05);
    glVertex2f(-.05, 0);
    glVertex2f(-.1, 0);

    glColor3f(.12, .36, .06);
    glVertex2f(-.05, 0);
    glVertex2f(0, 0);
    glVertex2f(0, -.05);
    glVertex2f(-.05, -.05);

    glColor3f(.12, .36, .06);
    glVertex2f(-.2, -.15);
    glVertex2f(.15, -.15);
    glVertex2f(.15, -.2);
    glVertex2f(-.2, -.2);

    glColor3f(.12, .36, .06);
    glVertex2f(-.15, -.2);
    glVertex2f(-.1, -.2);
    glVertex2f(-.1, -.25);
    glVertex2f(-.15, -.25);

    glColor3f(.12, .36, .06);
    glVertex2f(-.05, -.2);
    glVertex2f(.1, -.2);
    glVertex2f(.1, -.25);
    glVertex2f(-.05, -.25);

    glColor3f(.12, .36, .06);
    glVertex2f(-.1, -.25);
    glVertex2f(-.05, -.25);
    glVertex2f(-.05, -.3);
    glVertex2f(-.1, -.3);

    glColor3f(.12, .36, .06);
    glVertex2f(-.05, -.3);
    glVertex2f(0, -.3);
    glVertex2f(0, -.35);
    glVertex2f(-.05, -.35);

    glColor3f(.12, .36, .06);
    glVertex2f(0, -.05);
    glVertex2f(.05, -.05);
    glVertex2f(.05, -.1);
    glVertex2f(0, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(0, -.25);
    glVertex2f(.05, -.25);
    glVertex2f(.05, -.3);
    glVertex2f(0, -.3);

    glColor3f(.12, .36, .06);
    glVertex2f(.05, 0);
    glVertex2f(.1, 0);
    glVertex2f(.1, -.05);
    glVertex2f(.05, -.05);

    glColor3f(.12, .36, .06);
    glVertex2f(.05, -.3);
    glVertex2f(.1, -.3);
    glVertex2f(.1, -.35);
    glVertex2f(.05, -.35);

    glColor3f(.12, .36, .06);
    glVertex2f(.1, -.05);
    glVertex2f(.15, -.05);
    glVertex2f(.15, -.1);
    glVertex2f(.1, -.1);

    glColor3f(.12, .36, .06);
    glVertex2f(.1, -.25);
    glVertex2f(.15, -.25);
    glVertex2f(.15, -.3);
    glVertex2f(.1, -.3);

    glColor3f(.12, .36, .06);
    glVertex2f(.2, -.1);
    glVertex2f(.15, -.1);
    glVertex2f(.15, -.15);
    glVertex2f(.2, -.15);

    glColor3f(.12, .36, .06);
    glVertex2f(.2, -.2);
    glVertex2f(.15, -.2);
    glVertex2f(.15, -.25);
    glVertex2f(.2, -.25);

    glColor3f(.12, .36, .06);
    glVertex2f(.2, -.15);
    glVertex2f(.25, -.15);
    glVertex2f(.25, -.2);
    glVertex2f(.2, -.2);

    glColor3f(.12, .36, .06);
    glVertex2f(.1, -.35);
    glVertex2f(.2, -.35);
    glVertex2f(.2, -.4);
    glVertex2f(.1, -.4);

    glColor3f(.12, .36, .06);
    glVertex2f(.2, -.25);
    glVertex2f(.25, -.25);
    glVertex2f(.25, -.3);
    glVertex2f(.2, -.3);

    glColor3f(.12, .36, .06);
    glVertex2f(.25, -.2);
    glVertex2f(.3, -.2);
    glVertex2f(.3, -.35);
    glVertex2f(.25, -.35);

    glColor3f(.13, .27, .09);
    glVertex2f(-.5, -.15);
    glVertex2f(-.45, -.15);
    glVertex2f(-.45, -.2);
    glVertex2f(-.5, -.2);

    glColor3f(.13, .27, .09);
    glVertex2f(-.6, -.2);
    glVertex2f(-.4, -.2);
    glVertex2f(-.4, -.25);
    glVertex2f(-.6, -.25);

    glColor3f(.13, .27, .09);
    glVertex2f(-.55, -.25);
    glVertex2f(-.35, -.25);
    glVertex2f(-.35, -.3);
    glVertex2f(-.55, -.3);

    glColor3f(.13, .27, .09);
    glVertex2f(-.5, -.3);
    glVertex2f(-.4, -.3);
    glVertex2f(-.4, -.35);
    glVertex2f(-.5, -.35);

    glColor3f(.13, .27, .09);
    glVertex2f(-.3, -.1);
    glVertex2f(-.25, -.1);
    glVertex2f(-.25, -.15);
    glVertex2f(-.3, -.15);

    glColor3f(.13, .27, .09);
    glVertex2f(-.25, -.15);
    glVertex2f(-.2, -.15);
    glVertex2f(-.2, -.2);
    glVertex2f(-.25, -.2);

    glColor3f(.13, .27, .09);
    glVertex2f(-.35, -.2);
    glVertex2f(-.25, -.2);
    glVertex2f(-.25, -.25);
    glVertex2f(-.35, -.25);

    glColor3f(.13, .27, .09);
    glVertex2f(-.2, -.2);
    glVertex2f(-.15, -.2);
    glVertex2f(-.15, -.25);
    glVertex2f(-.2, -.25);

    glColor3f(.13, .27, .09);
    glVertex2f(-.1, -.2);
    glVertex2f(-.05, -.2);
    glVertex2f(-.05, -.25);
    glVertex2f(-.1, -.25);

    glColor3f(.13, .27, .09);
    glVertex2f(-.3, -.25);
    glVertex2f(-.1, -.25);
    glVertex2f(-.1, -.3);
    glVertex2f(-.3, -.3);

    glColor3f(.13, .27, .09);
    glVertex2f(-.05, -.25);
    glVertex2f(0, -.25);
    glVertex2f(0, -.3);
    glVertex2f(-.05, -.3);

    glColor3f(.13, .27, .09);
    glVertex2f(-.15, -.3);
    glVertex2f(-.05, -.3);
    glVertex2f(-.05, -.35);
    glVertex2f(-.15, -.35);

    glColor3f(.13, .27, .09);
    glVertex2f(-.1, -.35);
    glVertex2f(.1, -.35);
    glVertex2f(.1, -.4);
    glVertex2f(-.1, -.4);

    glColor3f(.13, .27, .09);
    glVertex2f(0, -.3);
    glVertex2f(.05, -.3);
    glVertex2f(.05, -.35);
    glVertex2f(0, -.35);

    glColor3f(.13, .27, .09);
    glVertex2f(.05, -.25);
    glVertex2f(.1, -.25);
    glVertex2f(.1, -.3);
    glVertex2f(.05, -.3);

    glColor3f(.13, .27, .09);
    glVertex2f(.1, -.3);
    glVertex2f(.15, -.3);
    glVertex2f(.15, -.35);
    glVertex2f(.1, -.35);

    glColor3f(.13, .27, .09);
    glVertex2f(.2, -.3);
    glVertex2f(.25, -.3);
    glVertex2f(.25, -.35);
    glVertex2f(.2, -.35);

    glColor3f(.13, .27, .09);
    glVertex2f(.25, -.35);
    glVertex2f(.3, -.35);
    glVertex2f(.3, -.4);
    glVertex2f(.25, -.4);

    glColor3f(.11, .2, .09);
    glVertex2f(-.7, -.2);
    glVertex2f(-.6, -.2);
    glVertex2f(-.6, -.25);
    glVertex2f(-.7, -.25);

    glColor3f(.11, .2, .09);
    glVertex2f(-.6, -.15);
    glVertex2f(-.5, -.15);
    glVertex2f(-.5, -.2);
    glVertex2f(-.6, -.2);

    glColor3f(.11, .2, .09);
    glVertex2f(-.5, -.1);
    glVertex2f(-.45, -.1);
    glVertex2f(-.45, -.15);
    glVertex2f(-.5, -.15);

    glColor3f(.11, .2, .09);
    glVertex2f(-.45, -.15);
    glVertex2f(-.4, -.15);
    glVertex2f(-.4, -.2);
    glVertex2f(-.45, -.2);

    glColor3f(.11, .2, .09);
    glVertex2f(-.4, -.2);
    glVertex2f(-.35, -.2);
    glVertex2f(-.35, -.25);
    glVertex2f(-.4, -.25);

    glColor3f(.11, .2, .09);
    glVertex2f(-.35, -.15);
    glVertex2f(-.3, -.15);
    glVertex2f(-.3, -.2);
    glVertex2f(-.35, -.2);

    glColor3f(.11, .2, .09);
    glVertex2f(-.25, -.3);
    glVertex2f(-.15, -.3);
    glVertex2f(-.15, -.35);
    glVertex2f(-.25, -.35);

    glColor3f(.11, .2, .09);
    glVertex2f(-.15, -.35);
    glVertex2f(-.1, -.35);
    glVertex2f(-.1, -.4);
    glVertex2f(-.15, -.4);

    glEnd();

    glPopMatrix();
}

void drawtail3(Figure tail3) {

    glPushMatrix();
    glScalef(tail3.xs, tail3.ys, 0);

    glPushMatrix();

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.3, -.1);
    glVertex2f(.35, -.1);
    glVertex2f(.35, -.15);
    glVertex2f(.3, -.15);

    glColor3f(.34, .74, .24);  //хвост 
    glVertex2f(.3, -.15);
    glVertex2f(.35, -.15);
    glVertex2f(.35, -.2);
    glVertex2f(.3, -.2);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.3, -.2);
    glVertex2f(.35, -.2);
    glVertex2f(.35, -.25);
    glVertex2f(.3, -.25);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.3, -.25);
    glVertex2f(.35, -.25);
    glVertex2f(.35, -.3);
    glVertex2f(.3, -.3);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.3, -.3);
    glVertex2f(.35, -.3);
    glVertex2f(.35, -.35);
    glVertex2f(.3, -.35);

    glColor3f(.11, .2, .09);  //хвост
    glVertex2f(.3, -.35);
    glVertex2f(.35, -.35);
    glVertex2f(.35, -.4);
    glVertex2f(.3, -.4);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.3, -.4);
    glVertex2f(.35, -.4);
    glVertex2f(.35, -.45);
    glVertex2f(.3, -.45);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail3.xt, 0.01 * sin(3 * tail3.yt + .3), 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.35, -.4);
    glVertex2f(.4, -.4);
    glVertex2f(.4, -.45);
    glVertex2f(.35, -.45);

    glColor3f(.13, .27, .09);  //хвост
    glVertex2f(.35, -.35);
    glVertex2f(.4, -.35);
    glVertex2f(.4, -.4);
    glVertex2f(.35, -.4);

    glColor3f(.13, .27, .09);  //хвост
    glVertex2f(.35, -.3);
    glVertex2f(.4, -.3);
    glVertex2f(.4, -.35);
    glVertex2f(.35, -.35);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.35, -.25);
    glVertex2f(.4, -.25);
    glVertex2f(.4, -.3);
    glVertex2f(.35, -.3);

    glColor3f(.34, .74, .24);  //хвост
    glVertex2f(.35, -.2);
    glVertex2f(.4, -.2);
    glVertex2f(.4, -.25);
    glVertex2f(.35, -.25);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.35, -.15);
    glVertex2f(.4, -.15);
    glVertex2f(.4, -.2);
    glVertex2f(.35, -.2);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail3.xt, 0.025 * sin(3 * tail3.yt + .5), 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.4, -.4);
    glVertex2f(.45, -.4);
    glVertex2f(.45, -.45);
    glVertex2f(.4, -.45);

    glColor3f(.13, .27, .09);  //хвост
    glVertex2f(.4, -.35);
    glVertex2f(.45, -.35);
    glVertex2f(.45, -.4);
    glVertex2f(.4, -.4);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.4, -.3);
    glVertex2f(.45, -.3);
    glVertex2f(.45, -.35);
    glVertex2f(.4, -.35);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.4, -.25);
    glVertex2f(.45, -.25);
    glVertex2f(.45, -.3);
    glVertex2f(.4, -.3);

    glColor3f(.26, .95, .09);  //хвост
    glVertex2f(.4, -.2);
    glVertex2f(.45, -.2);
    glVertex2f(.45, -.25);
    glVertex2f(.4, -.25);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.4, -.15);
    glVertex2f(.45, -.15);
    glVertex2f(.45, -.2);
    glVertex2f(.4, -.2);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail3.xt, 0.05 * sin(3 * tail3.yt + .7), 0);

    glBegin(GL_QUADS);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.45, -.4);
    glVertex2f(.5, -.4);
    glVertex2f(.5, -.45);
    glVertex2f(.45, -.45);

    glColor3f(.11, .2, .09);  //хвост
    glVertex2f(.45, -.35);
    glVertex2f(.5, -.35);
    glVertex2f(.5, -.4);
    glVertex2f(.45, -.4);

    glColor3f(.13, .27, .09);  //хвост
    glVertex2f(.45, -.3);
    glVertex2f(.5, -.3);
    glVertex2f(.5, -.35);
    glVertex2f(.45, -.35);

    glColor3f(.12, .36, .06);  //хвост
    glVertex2f(.45, -.25);
    glVertex2f(.5, -.25);
    glVertex2f(.5, -.3);
    glVertex2f(.45, -.3);

    glColor3f(.26, .95, .09);  //хвост
    glVertex2f(.45, -.2);
    glVertex2f(.5, -.2);
    glVertex2f(.5, -.25);
    glVertex2f(.45, -.25);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.45, -.15);
    glVertex2f(.5, -.15);
    glVertex2f(.5, -.2);
    glVertex2f(.45, -.2);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail3.xt, 0.05 * sin(3 * tail3.yt + .9), 0);

    glBegin(GL_QUADS);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.5, -.35);
    glVertex2f(.55, -.35);
    glVertex2f(.55, -.4);
    glVertex2f(.5, -.4);

    glColor3f(.11, .2, .09);  //хвост
    glVertex2f(.5, -.3);
    glVertex2f(.55, -.3);
    glVertex2f(.55, -.35);
    glVertex2f(.5, -.35);

    glColor3f(.12, .36, .09);  //хвост
    glVertex2f(.5, -.25);
    glVertex2f(.55, -.25);
    glVertex2f(.55, -.3);
    glVertex2f(.5, -.3);

    glColor3f(.12, .36, .09);  //хвост
    glVertex2f(.5, -.2);
    glVertex2f(.55, -.2);
    glVertex2f(.55, -.25);
    glVertex2f(.5, -.25);

    glColor3f(.26, .95, .09);  //хвост
    glVertex2f(.5, -.15);
    glVertex2f(.55, -.15);
    glVertex2f(.55, -.2);
    glVertex2f(.5, -.2);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.5, -.1);
    glVertex2f(.55, -.1);
    glVertex2f(.55, -.15);
    glVertex2f(.5, -.15);

    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(tail3.xt, 0.025 * sin(3 * tail3.yt + 1.1), 0);

    glBegin(GL_QUADS);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.55, -.3);
    glVertex2f(.6, -.3);
    glVertex2f(.6, -.35);
    glVertex2f(.55, -.35);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.55, -.25);
    glVertex2f(.6, -.25);
    glVertex2f(.6, -.3);
    glVertex2f(.55, -.3);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.55, -.2);
    glVertex2f(.6, -.2);
    glVertex2f(.6, -.25);
    glVertex2f(.55, -.25);

    glColor3f(.11, .11, .09);  //хвост
    glVertex2f(.55, -.15);
    glVertex2f(.6, -.15);
    glVertex2f(.6, -.2);
    glVertex2f(.55, -.2);
    glEnd();

    glPopMatrix();

    glPopMatrix();
}

void drawd3l1(Figure d3l1) {

    glPushMatrix();
    glScalef(d3l1.xs, d3l1.ys, 0);

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l1.xt + .45), d3l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 1
    glVertex2f(-.55, -.5);
    glVertex2f(-.5, -.5);
    glVertex2f(-.5, -.55);
    glVertex2f(-.55, -.55);

    glColor3f(.13, .27, .09);  //лапка 1
    glVertex2f(-.6, -.5);
    glVertex2f(-.55, -.5);
    glVertex2f(-.55, -.55);
    glVertex2f(-.6, -.55);

    glColor3f(.13, .27, .09);  //лапка 1
    glVertex2f(-.65, -.5);
    glVertex2f(-.6, -.5);
    glVertex2f(-.6, -.55);
    glVertex2f(-.65, -.55);

    glColor3f(.11, .11, .09); //лапка 1
    glVertex2f(-.7, -.5);
    glVertex2f(-.65, -.5);
    glVertex2f(-.65, -.55);
    glVertex2f(-.7, -.55);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l1.xt + .45), d3l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 1
    glVertex2f(-.55, -.45);
    glVertex2f(-.5, -.45);
    glVertex2f(-.5, -.5);
    glVertex2f(-.55, -.5);

    glColor3f(.12, .36, .06);  //лапка 1
    glVertex2f(-.6, -.45);
    glVertex2f(-.55, -.45);
    glVertex2f(-.55, -.5);
    glVertex2f(-.6, -.5);

    glColor3f(.34, .74, .24);  //лапка 1
    glVertex2f(-.65, -.45);
    glVertex2f(-.6, -.45);
    glVertex2f(-.6, -.5);
    glVertex2f(-.65, -.5);

    glColor3f(.11, .11, .09); //лапка 1
    glVertex2f(-.7, -.45);
    glVertex2f(-.65, -.45);
    glVertex2f(-.65, -.5);
    glVertex2f(-.7, -.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l1.xt + .45), d3l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 1
    glVertex2f(-.5, -.4);
    glVertex2f(-.45, -.4);
    glVertex2f(-.45, -.45);
    glVertex2f(-.5, -.45);

    glColor3f(.13, .27, .09);  //лапка 1
    glVertex2f(-.55, -.4);
    glVertex2f(-.5, -.4);
    glVertex2f(-.5, -.45);
    glVertex2f(-.55, -.45);

    glColor3f(.34, .74, .24);  //лапка 1
    glVertex2f(-.6, -.4);
    glVertex2f(-.55, -.4);
    glVertex2f(-.55, -.45);
    glVertex2f(-.6, -.45);

    glColor3f(.11, .11, .09);  //лапка 1
    glVertex2f(-.65, -.4);
    glVertex2f(-.6, -.4);
    glVertex2f(-.6, -.45);
    glVertex2f(-.65, -.45);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l1.xt + .3), d3l1.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 1
    glVertex2f(-.45, -.35);
    glVertex2f(-.4, -.35);
    glVertex2f(-.4, -.4);
    glVertex2f(-.45, -.4);

    glColor3f(.13, .27, .09);  //лапка 1
    glVertex2f(-.5, -.35);
    glVertex2f(-.45, -.35);
    glVertex2f(-.45, -.4);
    glVertex2f(-.5, -.4);

    glColor3f(.12, .36, .06);  //лапка 1
    glVertex2f(-.55, -.35);
    glVertex2f(-.5, -.35);
    glVertex2f(-.5, -.4);
    glVertex2f(-.55, -.4);

    glColor3f(.34, .74, .24);  //лапка 1
    glVertex2f(-.6, -.35);
    glVertex2f(-.55, -.35);
    glVertex2f(-.55, -.4);
    glVertex2f(-.6, -.4);

    glColor3f(.11, .11, .09);  //лапка 1
    glVertex2f(-.65, -.35);
    glVertex2f(-.6, -.35);
    glVertex2f(-.6, -.4);
    glVertex2f(-.65, -.4);
    glEnd();
    glPopMatrix();

    glPopMatrix();

}

void drawd3l2(Figure d3l2) {

    glPushMatrix();
    glScalef(d3l2.xs, d3l2.ys, 0);

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l2.xt + .45), d3l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09); //лапка 2
    glVertex2f(-.25, -.5);
    glVertex2f(-.2, -.5);
    glVertex2f(-.2, -.55);
    glVertex2f(-.25, -.55);

    glColor3f(.13, .27, .09);  //лапка 2
    glVertex2f(-.3, -.5);
    glVertex2f(-.25, -.5);
    glVertex2f(-.25, -.55);
    glVertex2f(-.3, -.55);

    glColor3f(.13, .27, .09);  //лапка 2
    glVertex2f(-.35, -.5);
    glVertex2f(-.3, -.5);
    glVertex2f(-.3, -.55);
    glVertex2f(-.35, -.55);

    glColor3f(.11, .11, .09);  //лапка 2
    glVertex2f(-.4, -.5);
    glVertex2f(-.35, -.5);
    glVertex2f(-.35, -.55);
    glVertex2f(-.4, -.55);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l2.xt + .45), d3l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09); //лапка 2
    glVertex2f(-.25, -.45);
    glVertex2f(-.2, -.45);
    glVertex2f(-.2, -.5);
    glVertex2f(-.25, -.5);

    glColor3f(.12, .36, .06);  //лапка 2
    glVertex2f(-.3, -.45);
    glVertex2f(-.25, -.45);
    glVertex2f(-.25, -.5);
    glVertex2f(-.3, -.5);

    glColor3f(.13, .27, .09);  //лапка 2
    glVertex2f(-.35, -.45);
    glVertex2f(-.3, -.45);
    glVertex2f(-.3, -.5);
    glVertex2f(-.35, -.5);

    glColor3f(.11, .11, .09);  //лапка 2
    glVertex2f(-.4, -.45);
    glVertex2f(-.35, -.45);
    glVertex2f(-.35, -.5);
    glVertex2f(-.4, -.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l2.xt + .45), d3l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09); //лапка 2
    glVertex2f(-.25, -.4);
    glVertex2f(-.2, -.4);
    glVertex2f(-.2, -.45);
    glVertex2f(-.25, -.45);

    glColor3f(.34, .74, .24);  //лапка 2
    glVertex2f(-.3, -.4);
    glVertex2f(-.25, -.4);
    glVertex2f(-.25, -.45);
    glVertex2f(-.3, -.45);

    glColor3f(.12, .36, .06);  //лапка 2
    glVertex2f(-.35, -.4);
    glVertex2f(-.3, -.4);
    glVertex2f(-.3, -.45);
    glVertex2f(-.35, -.45);

    glColor3f(.11, .11, .09);  //лапка 2
    glVertex2f(-.4, -.4);
    glVertex2f(-.35, -.4);
    glVertex2f(-.35, -.45);
    glVertex2f(-.4, -.45);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l2.xt + .3), d3l2.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09); //лапка 2
    glVertex2f(-.25, -.35);
    glVertex2f(-.2, -.35);
    glVertex2f(-.2, -.4);
    glVertex2f(-.25, -.4);

    glColor3f(.34, .74, .24);  //лапка 2
    glVertex2f(-.3, -.35);
    glVertex2f(-.25, -.35);
    glVertex2f(-.25, -.4);
    glVertex2f(-.3, -.4);

    glColor3f(.12, .36, .06);  //лапка 2
    glVertex2f(-.35, -.35);
    glVertex2f(-.3, -.35);
    glVertex2f(-.3, -.4);
    glVertex2f(-.35, -.4);

    glColor3f(.13, .27, .09);  //лапка 2
    glVertex2f(-.4, -.35);
    glVertex2f(-.35, -.35);
    glVertex2f(-.35, -.4);
    glVertex2f(-.4, -.4);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawd3l3(Figure d3l3) {

    glPushMatrix();
    glScalef(d3l3.xs, d3l3.ys, 0);

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l3.xt + .45), d3l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 3
    glVertex2f(0, -.5);
    glVertex2f(.05, -.5);
    glVertex2f(.05, -.55);
    glVertex2f(0, -.55);

    glColor3f(.13, .27, .09);  //лапка 3
    glVertex2f(-.05, -.5);
    glVertex2f(0, -.5);
    glVertex2f(0, -.55);
    glVertex2f(-.05, -.55);

    glColor3f(.13, .27, .09);  //лапка 3
    glVertex2f(-.1, -.5);
    glVertex2f(-.05, -.5);
    glVertex2f(-.05, -.55);
    glVertex2f(-.1, -.55);

    glColor3f(.11, .11, .09);  //лапка 3
    glVertex2f(-.15, -.5);
    glVertex2f(-.1, -.5);
    glVertex2f(-.1, -.55);
    glVertex2f(-.15, -.55);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l3.xt + .45), d3l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 3
    glVertex2f(0, -.45);
    glVertex2f(.05, -.45);
    glVertex2f(.05, -.5);
    glVertex2f(0, -.5);

    glColor3f(.12, .36, .06);  //лапка 3
    glVertex2f(-.05, -.45);
    glVertex2f(0, -.45);
    glVertex2f(0, -.5);
    glVertex2f(-.05, -.5);

    glColor3f(.12, .36, .06);  //лапка 3
    glVertex2f(-.1, -.45);
    glVertex2f(-.05, -.45);
    glVertex2f(-.05, -.5);
    glVertex2f(-.1, -.5);

    glColor3f(.11, .11, .09);  //лапка 3
    glVertex2f(-.15, -.45);
    glVertex2f(-.1, -.45);
    glVertex2f(-.1, -.5);
    glVertex2f(-.15, -.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l3.xt + .3), d3l3.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 3
    glVertex2f(0, -.4);
    glVertex2f(.05, -.4);
    glVertex2f(.05, -.45);
    glVertex2f(0, -.45);

    glColor3f(.13, .27, .09);  //лапка 3
    glVertex2f(-.05, -.4);
    glVertex2f(0, -.4);
    glVertex2f(0, -.45);
    glVertex2f(-.05, -.45);

    glColor3f(.12, .36, .06);  //лапка 3
    glVertex2f(-.1, -.4);
    glVertex2f(-.05, -.4);
    glVertex2f(-.05, -.45);
    glVertex2f(-.1, -.45);

    glColor3f(.11, .11, .09);  //лапка 3
    glVertex2f(-.15, -.4);
    glVertex2f(-.1, -.4);
    glVertex2f(-.1, -.45);
    glVertex2f(-.15, -.45);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawd3l4(Figure d3l4) {

    glPushMatrix();
    glScalef(d3l4.xs, d3l4.ys, 0);

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l4.xt + .45), d3l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 4
    glVertex2f(.25, -.5);
    glVertex2f(.3, -.5);
    glVertex2f(.3, -.55);
    glVertex2f(.25, -.55);

    glColor3f(.13, .27, .09);  //лапка 4
    glVertex2f(.2, -.5);
    glVertex2f(.25, -.5);
    glVertex2f(.25, -.55);
    glVertex2f(.2, -.55);

    glColor3f(.13, .27, .09);  //лапка 4
    glVertex2f(.15, -.5);
    glVertex2f(.2, -.5);
    glVertex2f(.2, -.55);
    glVertex2f(.15, -.55);

    glColor3f(.11, .11, .09);  //лапка 4
    glVertex2f(.1, -.5);
    glVertex2f(.15, -.5);
    glVertex2f(.15, -.55);
    glVertex2f(.1, -.55);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l4.xt + .45), d3l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .11, .09);  //лапка 4
    glVertex2f(.25, -.45);
    glVertex2f(.3, -.45);
    glVertex2f(.3, -.5);
    glVertex2f(.25, -.5);

    glColor3f(.12, .36, .06);  //лапка 4
    glVertex2f(.2, -.45);
    glVertex2f(.25, -.45);
    glVertex2f(.25, -.5);
    glVertex2f(.2, -.5);

    glColor3f(.12, .36, .06);  //лапка 4
    glVertex2f(.15, -.45);
    glVertex2f(.2, -.45);
    glVertex2f(.2, -.5);
    glVertex2f(.15, -.5);

    glColor3f(.11, .11, .09);  //лапка 4
    glVertex2f(.1, -.45);
    glVertex2f(.15, -.45);
    glVertex2f(.15, -.5);
    glVertex2f(.1, -.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.015 * sin(3 * d3l4.xt + .3), d3l4.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.11, .2, .09);
    glVertex2f(.25, -.4);
    glVertex2f(.3, -.4);
    glVertex2f(.3, -.45);
    glVertex2f(.25, -.45);

    glColor3f(.34, .74, .24);  //лапка 4 
    glVertex2f(.2, -.4);
    glVertex2f(.25, -.4);
    glVertex2f(.25, -.45);
    glVertex2f(.2, -.45);

    glColor3f(.12, .36, .06);  //лапка 4
    glVertex2f(.15, -.4);
    glVertex2f(.2, -.4);
    glVertex2f(.2, -.45);
    glVertex2f(.15, -.45);

    glColor3f(.13, .27, .09);  //лапка 4
    glVertex2f(.1, -.4);
    glVertex2f(.15, -.4);
    glVertex2f(.15, -.45);
    glVertex2f(.1, -.45);

    glColor3f(.11, .11, .09);  //лапка 4
    glVertex2f(.05, -.4);
    glVertex2f(.1, -.4);
    glVertex2f(.1, -.45);
    glVertex2f(.05, -.45);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

void drawdino3() {

    float phi = curTime * 0.001;

    glPushMatrix();
    Figure dinosavr3;
    dinosavr3.xs = 0.4;
    dinosavr3.ys = 0.4;
    dinosavr3.xt = 0;
    dinosavr3.yt = 0;
    dinosavr3.xr = 0;
    dinosavr3.yr = 0;
    drawdinosavr3(dinosavr3);
    glPopMatrix();

    glPushMatrix();
    Figure tail3;
    tail3.xs = 0.4;
    tail3.ys = 0.4;
    tail3.xt = 0;
    tail3.yt = phi;
    tail3.xr = 0;
    tail3.yr = 0;
    drawtail3(tail3);
    glPopMatrix();

    glPushMatrix();
    Figure d3l1;
    d3l1.xs = 0.4;
    d3l1.ys = 0.4;
    d3l1.xt = phi;
    d3l1.yt = 0;
    d3l1.xr = 0;
    d3l1.yr = 0;
    drawd3l1(d3l1);
    glPopMatrix();

    glPushMatrix();
    Figure d3l2;
    d3l2.xs = 0.4;
    d3l2.ys = 0.4;
    d3l2.xt = phi;
    d3l2.yt = 0;
    d3l2.xr = 0;
    d3l2.yr = 0;
    drawd3l2(d3l2);
    glPopMatrix();

    glPushMatrix();
    Figure d3l3;
    d3l3.xs = 0.4;
    d3l3.ys = 0.4;
    d3l3.xt = phi;
    d3l3.yt = 0;
    d3l3.xr = 0;
    d3l3.yr = 0;
    drawd3l3(d3l3);
    glPopMatrix();

    glPushMatrix();
    Figure d3l4;
    d3l4.xs = 0.4;
    d3l4.ys = 0.4;
    d3l4.xt = phi;
    d3l4.yt = 0;
    d3l4.xr = 0;
    d3l4.yr = 0;
    drawd3l4(d3l4);
    glPopMatrix();
}

void drawMovingdino3(time_t curTime) {
    float pos = -curTime * 0.000035;

    for (int i = 0; i < 1; i++) {
        glPushMatrix();
        glTranslatef(.8 + pos + 1.5 * (i), -.7, 0);
        drawdino3();
        glPopMatrix();
    }
}

void drawTree(Figure tree) {

    glPushMatrix();
    glScalef(tree.xs, tree.ys, 0);
    glTranslatef(tree.xt, tree.yt, 0);

    glBegin(GL_QUADS);
    glColor3f(.65, .2, 0); // ствол
    glVertex2f(-.07, -.7);
    glVertex2f(.07, -.7);
    glVertex2f(.07, .4);
    glVertex2f(-.07, .4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(.65, .2, 0); // левое закругление ствола
    glVertex2f(-.07, -.7);
    glVertex2f(-.1, -.7);
    glVertex2f(-.07, .4);

    glColor3f(.65, .2, 0); // правое закругление ствола 
    glVertex2f(.07, -.7);
    glVertex2f(.1, -.7);
    glVertex2f(.07, .4);
    glEnd();

    glScaled(.4, .4, 0);   // листва
    glTranslated(0, .6, 0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0, 1, 0);
    for (float i = 0; i < 2 * 3.14; i += 3.14 / 4) {
        glVertex2f(cos(i), sin(i));
    }
    glEnd();

    glPopMatrix();
}

void animateScene(int value) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, animateScene, 1);
}