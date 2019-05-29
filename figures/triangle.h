#pragma once

#include "Figure.h"
#include "Point.h"
#include <QPointF>

class Triangle : public Figure
{
protected:

    int height;
    int posx;
    int posy;

public:
    Triangle(int pheight, int pposx, int pposy);
    ~Triangle();
    void draw(QPainter * painter);

//    void draw(QPainter * painter);

};
