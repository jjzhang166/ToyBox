#include "foodiecover.h"

FoodieCover::FoodieCover(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowOpacity(0.8);
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

	//setAutoFillBackground(true);
	//palette.setBrush(QPalette::Background, QBrush(QPixmap(":/FoodieUI/Resource/kaola.png")));
	//setPalette(palette);

	//showFullScreen();
}

FoodieCover::~FoodieCover()
{

}

void FoodieCover::mousePressEvent(QMouseEvent *event)
{
	if(event->button() == Qt::LeftButton)
	{
		QPoint windowPos = pos();
		QPoint mousePos = event->globalPos();
		dPos = mousePos - windowPos;

		_cursor = cursor();
		setCursor(Qt::ClosedHandCursor);
	}
}  

void FoodieCover::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons() & Qt::LeftButton)
	{
		move(event->globalPos() - dPos);
		event->accept();
	}
}

void FoodieCover::mouseReleaseEvent(QMouseEvent* evn)
{
	setCursor(_cursor);
}