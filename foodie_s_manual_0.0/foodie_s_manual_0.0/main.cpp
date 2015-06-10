#include "uimanager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	UiManager um;
	
	return a.exec();
}
