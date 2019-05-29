#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Point.h"

#include <QVector>
#include <QRectF>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QString>
#include <QPoint>

using namespace std;

class Figure
{
protected:
	string color;
public:
	Figure(string pcolor = "black");
	virtual ~Figure() = 0;
    void virtual draw(QPainter * painter) = 0;
};

