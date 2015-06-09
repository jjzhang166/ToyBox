#include "foodieReader.h"

FoodieReader::FoodieReader(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowOpacity(0.8);
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

	//setAutoFillBackground(true);
	//palette.setBrush(QPalette::Background, QBrush(QPixmap(":/FoodieEditer/Resource/kaola.png")));
	//setPalette(palette);

	//showFullScreen();
}

FoodieReader::~FoodieReader()
{

}

void FoodieReader::readerShow(void)
{
	showFullScreen();
}

void FoodieReader::mousePressEvent(QMouseEvent *event)
{
		_cursor = cursor();
		setCursor(Qt::ClosedHandCursor);
}  

void FoodieReader::mouseMoveEvent(QMouseEvent *event)
{
}

void FoodieReader::mouseReleaseEvent(QMouseEvent* evn)
{
	setCursor(_cursor);
}