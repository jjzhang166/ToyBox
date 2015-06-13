#include "foodiecover.h"

FoodieCover::FoodieCover(UiManager* um, QWidget *parent)
	: QWidget(parent), FoodieUi(um, parent)
	, _isDrab(false)
{
	ui.setupUi(this);
	
	//setWindowOpacity(0.8);
	setWindowFlags(Qt::FramelessWindowHint);
	//setAttribute(Qt::WA_TranslucentBackground);
	palette.setBrush(QPalette::Background, QBrush(QPixmap(":/FoodieUI/Resources/kaola.png")));
	setPalette(palette);

	show();
}

FoodieCover::~FoodieCover()
{
	//hide();
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
	}
}

void FoodieCover::mouseReleaseEvent(QMouseEvent* evn)
{
	if(evn->button() == Qt::LeftButton)
	{
		setCursor(_cursor);
		if(! _isDrab)
		{
			emit FoodieUi::uiMsgSender(COVER_CLICK);
		}
		else
		{
			_isDrab = false;
		}
	}
}