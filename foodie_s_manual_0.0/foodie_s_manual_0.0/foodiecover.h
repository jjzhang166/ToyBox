#ifndef FOODIECOVER_H
#define FOODIECOVER_H

#include <QWidget>
#include <QMouseEvent>
#include "ui_foodiecover.h"

class FoodieCover : public QWidget
{
	Q_OBJECT

public:
	FoodieCover(QWidget *parent = 0);
	~FoodieCover();

signals:
	void coverClick(void);
	
private:
	void mousePressEvent(QMouseEvent *evn);
	void mouseMoveEvent(QMouseEvent *evn);
	void mouseReleaseEvent(QMouseEvent* evn);

private:
	Ui::FoodieCover ui;

	QPoint dPos;
	bool _isDrab;
	QPalette palette;

	QCursor _cursor;
};

#endif // FOODIECOVER_H
