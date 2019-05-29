//#include "stdafx.h"
#include "Point.h"


Point::Point(int px, int py)
{
	x = px;
	y = py;
}


Point::~Point()
{
}

int Point::getx()
{
	return x;
}

int Point::gety()
{
	return y;
}

void Point::set_xy(int _x, int _y)
{
	x = _x;
	y = _y;
}
