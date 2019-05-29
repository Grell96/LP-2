#pragma once
#include "Figure.h"
class Circle : public Figure
{
protected:
	int radio;
	Point * center = new Point();

public:
	Circle(string pcolor, int pradio=1, int px=0, int py=0);
    void draw(QPainter * painter);
    Point * getCenter();
	~Circle();
};

