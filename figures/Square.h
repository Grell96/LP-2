#pragma once
#include "Figure.h"
#include "Point.h"
#include <vector>
class Square :	public Figure
{
protected:
	int side;
    Point * start = new Point();

public:
	Square(string pcolor, int pside=1,int px=0,int py=0);
	~Square();
    void draw(QPainter * painter);
};

