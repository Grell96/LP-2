#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QString>
#include <QPoint>
#include <QRectF>
#include <iostream>
#include "Figure.h"
#include "Point.h"
#include "Circle.h"
#include "Square.h"
#include "triangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
    void drawing();

private slots:
	void on_b_draw_circle_clicked();

    void on_b_draw_square_clicked();

    void on_b_draw_triangle_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
	void draw_circle(QPainter * painter);
    void draw_square(QPainter * painter);
    void draw_triangle(QPainter * painter);

private:
	Ui::MainWindow *ui;

    vector<Figure *> shapes;

	// draw objects
	QPainter * painter;
	QPixmap * pixmap;
	QPen * pen;
};

#endif // MAINWINDOW_H
