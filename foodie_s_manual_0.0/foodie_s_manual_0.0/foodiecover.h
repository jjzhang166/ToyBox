#ifndef FOODIECOVER_H
#define FOODIECOVER_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
#include <QMovie>
#include <QMouseEvent>
#include "ui_foodiecover.h"

#include "UiMsgType.h"
#include "foodieui.h"

class FoodieCover : public QWidget, public FoodieUi
{
	Q_OBJECT

public:
	FoodieCover(UiManager* um, QWidget *parent = 0);
	~FoodieCover();

	
private:
	void mousePressEvent(QMouseEvent *evn);
	void mouseMoveEvent(QMouseEvent *evn);
	void mouseReleaseEvent(QMouseEvent* evn);

	//void paintEvent(QPaintEvent* evn);

private:
	Ui::FoodieCover ui;

	QPoint dPos;
	bool _isDrab;

	QCursor _cursor;
};

#endif // FOODIECOVER_H
