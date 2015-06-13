#include "foodieReader.h"

FoodieReader::FoodieReader(UiManager* um, QWidget *parent)
	: QWidget(parent), FoodieUi(um, parent)
{
	ui.setupUi(this);
	setWindowOpacity(0.8);
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

	//setAutoFillBackground(true);
	//palette.setBrush(QPalette::Background, QBrush(QPixmap(":/FoodieEditer/Resource/kaola.png")));
	//setPalette(palette);

	showFullScreen();
}

FoodieReader::~FoodieReader()
{

}

void FoodieReader::mousePressEvent(QMouseEvent *evn)
{
	if(evn->button() == Qt::LeftButton)
	{
		_cursor = cursor();
		setCursor(Qt::ClosedHandCursor);
	}
}  

void FoodieReader::mouseMoveEvent(QMouseEvent *evn)
{
}

void FoodieReader::mouseReleaseEvent(QMouseEvent* evn)
{
	if(evn->button() == Qt::LeftButton)
	{
		setCursor(_cursor);
	}
}


bool FoodieReader::store()
{
	return true;
}

bool FoodieReader::restore()
{
	return true;
}