#include "triangle.h"

Triangle::Triangle(int pheight, int pposx, int pposy)
{
    height = pheight;
    posx = pposx;
    posy = pposy;
}
Triangle::~Triangle()
{

}

void Triangle::draw(QPainter * painter)
{
   /* static const QPoint points[3] = {
        QPoint(posx,posy),
        QPoint(posx-height/2, posy-height),
        QPoint(posx+height/2, posy-height),
    };

    painter->drawPolygon(points,3);*/
    painter->drawLine(posx,posy,posx-height/2, posy+height);
    painter->drawLine(posx-height/2, posy+height,posx+height/2, posy+height);
    painter->drawLine(posx+height/2, posy+height,posx,posy);
    cout << "Se triangulo h " << height << "de coordenadas "<< posx << "," << posy << endl << endl;

}
