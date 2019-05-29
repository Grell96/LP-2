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

void MainWindow::draw_circle(QPainter * painter)
{
    shapes.push_back(new Circle("red",rand() % 100,rand() % 500,rand() % 400));
    for(Figure * s:shapes)
    {
        s->draw(painter);
    }

}

void MainWindow::on_b_draw_circle_clicked()
{
	pixmap->fill();

	draw_circle(painter);

	ui->label_draw_area->setPixmap(*pixmap);
}

void MainWindow::draw_square(QPainter * painter)
{
    shapes.push_back(new Square("yellow",rand() % 100,rand() % 500,rand() % 400));
    for(Figure * s:shapes)
        s->draw(painter);
}
void MainWindow::on_b_draw_square_clicked()
{
    pixmap->fill();

    draw_square(painter);

    ui->label_draw_area->setPixmap(*pixmap);
}

void MainWindow::draw_triangle(QPainter * painter)
{
    shapes.push_back(new Triangle(rand() % 100,rand() % 500,rand() % 400));
    for(Figure * s:shapes)
        s->draw(painter);
}

void MainWindow::on_b_draw_triangle_clicked()
{
    pixmap->fill();

    draw_triangle(painter);

    ui->label_draw_area->setPixmap(*pixmap);
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
