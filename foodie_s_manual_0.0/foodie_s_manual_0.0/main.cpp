#include "foodieui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FoodieUI w;
	w.show();
	return a.exec();
}
