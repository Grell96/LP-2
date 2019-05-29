#pragma once
using namespace std;

class Point
{
protected:
	int x;
	int y;
public:
	Point(int px=0, int py=0);
	~Point();
	int getx();
	int gety();
	void set_xy(int _x, int _y);
};

