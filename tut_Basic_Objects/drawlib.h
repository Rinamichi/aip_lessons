#pragma once

#include "GL/freeglut.h"
#include "ctime"
#include "cmath"
#include "vector"

struct Figure {
    float xs, ys;
    float xt, yt;
    float xr, yr;
    float rc, gc, bc;
    float x, y;
};

extern clock_t curTime, startTime;

void FON();

void drawstars(Figure star);

void drawSky();

void initSky();

void drawdinosavr1(Figure dinosavr1);

void drawtail1(Figure tail1);

void drawdino1();

void drawdinosavr2(Figure dinosavr2);

void drawtail2(Figure tail2);

void drawd2l1(Figure d2l1);

void drawd2l2(Figure d2l2);

void drawd2l3(Figure d2l3);

void drawd2l4(Figure d2l4);

void drawdino2();

void drawMovingdino2(time_t curTime);

void drawdinosavr3(Figure dinosavr3);

void drawtail3(Figure tail3);

void drawd3l1(Figure d3l1);

void drawd3l2(Figure d3l2);

void drawd3l3(Figure d3l3);

void drawd3l4(Figure d3l4);

void drawdino3();

void drawMovingdino3(time_t curTime);

void drawTree(Figure tree);

void animateScene(int value);