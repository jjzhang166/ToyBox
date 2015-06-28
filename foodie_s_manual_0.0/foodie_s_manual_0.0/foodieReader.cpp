#include "foodieReader.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

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
		QString content = ui.textEdit->toHtml();
		QFile sf = QFileDialog::getSaveFileName(this, "save file", QDir::homePath(), NULL);
		if(!sf.open(QIODevice::WriteOnly))
		{
			QMessageBox::warning(this, "error", QString("Can't open file(%1).\n").arg(sf.fileName()));
		}

		QTextStream ts(&sf);
		ts << content;
		ts.device()->close();
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
