#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	pixmap = new QPixmap(600, 400);
	pixmap->fill();

	pen = new QPen(QColor("black"));

	ui->label_draw_area->setPixmap(*pixmap);

	painter = new QPainter(pixmap);
	painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
	delete ui;
    for(Figure * s:shapes)
        delete s;
}

void MainWindow::drawing()
{
    pixmap->fill();
    for(Figure * s:shapes)
         s->draw(painter);
    ui->label_draw_area->setPixmap(*pixmap);
}


void MainWindow::on_b_draw_circle_clicked()
{
    shapes.push_back(new Circle("red",rand() % 100,rand() % 500,rand() % 400));

    drawing();
}

void MainWindow::on_b_draw_square_clicked()
{         
    drawing();

    shapes.push_back(new Square("yellow",rand() % 100,rand() % 500,rand() % 400));
}


void MainWindow::on_b_draw_triangle_clicked()
{
    drawing();

    shapes.push_back(new Triangle(rand() % 100,rand() % 500,rand() % 400));

}

void MainWindow::on_pushButton_clicked()
{
    pen = new QPen(QColor("red"));

    painter->setPen(*pen);
}

void MainWindow::on_pushButton_3_clicked()
{
    pen = new QPen(QColor("black"));

    painter->setPen(*pen);
}


void MainWindow::on_pushButton_2_clicked()
{
    pen = new QPen(QColor("blue"));

    painter->setPen(*pen);
}

void MainWindow::on_pushButton_4_clicked()
{
    pen = new QPen(QColor("green"));

    painter->setPen(*pen);
}

void MainWindow::on_pushButton_5_clicked()
{
    pen = new QPen(QColor("brown"));

    painter->setPen(*pen);
}

void MainWindow::on_pushButton_6_clicked()
{

pen = new QPen(QColor("white"));

painter->setPen(*pen);
}
