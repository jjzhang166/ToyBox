#include "foodieui.h"
#include "foodiecover.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FoodieCover fc;
	FoodieUI fu;
	fc.show();
	return a.exec();
}
