#include "foodiecover.h"

FoodieCover::FoodieCover(QWidget *parent)
	: QWidget(parent)
	, _isDrab(false)
{
	ui.setupUi(this);
	
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);
}

FoodieCover::~FoodieCover()
{

}

void FoodieCover::mousePressEvent(QMouseEvent *evn)
{
	if(evn->button() == Qt::LeftButton)
	{
		QPoint windowPos = pos();
		QPoint mousePos = evn->globalPos();
		dPos = mousePos - windowPos;

		_cursor = cursor();
		setCursor(Qt::ClosedHandCursor);
	}
}  

void FoodieCover::mouseMoveEvent(QMouseEvent *evn)
{
	if (evn->buttons() & Qt::LeftButton)
	{
		_isDrab = true;
		move(evn->globalPos() - dPos);
		evn->accept();
	}
}

void FoodieCover::mouseReleaseEvent(QMouseEvent* evn)
{
	setCursor(_cursor);
	if(! _isDrab)
	{
		hide();
		emit coverClick();
	}
	else
	{
		_isDrab = false;
	}
}