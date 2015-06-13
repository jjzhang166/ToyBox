#ifndef FLOATINGPALETTES_H
#define FLOATINGPALETTES_H

#include <QWidget>
#include "ui_floatingpalettes.h"

class FloatingPalettes : public QWidget
{
	Q_OBJECT

public:
	FloatingPalettes(QWidget *parent = 0);
	~FloatingPalettes();

private:
	Ui::FloatingPalettes ui;
};

#endif // FLOATINGPALETTES_H
