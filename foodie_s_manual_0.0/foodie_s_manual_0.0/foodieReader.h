#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include "ui_foodieReader.h"

class FoodieReader : public QWidget
{
	Q_OBJECT

public:
	FoodieReader(QWidget *parent = 0);
	~FoodieReader();

public slots:
	void readerShow(void);

private:
	void mousePressEvent(QMouseEvent *evn);
	void mouseMoveEvent(QMouseEvent *evn);
	void mouseReleaseEvent(QMouseEvent* evn);
	
private:
	Ui::FoodieReader ui;
	
	QCursor _cursor;
};

