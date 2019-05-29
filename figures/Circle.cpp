//#include "stdafx.h"
#include "Circle.h"


Circle::Circle(string pcolor, int pradio, int px, int py):Figure(pcolor)
{
	color = pcolor;
	radio = pradio;
	center->set_xy(px, py);
}


Circle::~Circle()
{
	delete center;
}

void Circle::draw(QPainter * painter)
{
    //cout << "Se dibuja un circulo de radio " << radio << " de color " << color << " y de coordenadas "<< center->getx() << "," << center->gety() << endl << endl;

    painter->drawEllipse(center->getx(),center->gety(),radio,radio);

}
Point * Circle::getCenter()
{
    return center;
}
