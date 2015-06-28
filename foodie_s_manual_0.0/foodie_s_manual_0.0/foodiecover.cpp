#include "foodiecover.h"

FoodieCover::FoodieCover(UiManager* um, QWidget *parent)
	: QWidget(parent), FoodieUi(um, parent)
	, _isDrab(false)
{
	ui.setupUi(this);
	
	//setWindowOpacity(0.8);
	setWindowFlags(Qt::FramelessWindowHint);

	QPixmap cover;
	cover.load(":/FoodieUI/Resources/foodie.gif");
	resize(cover.size());
#if 0//ÉèÖÃÕÚÕÖ£¬ÖØÔØpaintEventÏÔÊ¾±³¾°
	setMask(cover.mask());
#else//ÏÔÊ¾gif
	setAttribute(Qt::WA_TranslucentBackground);

	ui.label->setMovie(new QMovie(ui.label));
	ui.label->movie()->setFileName(":/FoodieUI/Resources/foodie.gif");
	ui.label->movie()->start();
#endif

	show();
}

FoodieCover::~FoodieCover()
{
	//hide();
}


//void FoodieCover::paintEvent(QPaintEvent* evn)
//{
//	QPainter pnt(this);
//	pnt.drawPixmap(0, 0, QPixmap(":/FoodieUI/Resources/foodie.png"));
//}

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