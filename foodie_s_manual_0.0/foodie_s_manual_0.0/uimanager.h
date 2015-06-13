#ifndef UIMANAGER_H
#define UIMANAGER_H
#include <QObject>

#include "UiMsgType.h"

#include "foodiecover.h"
#include "foodieReader.h"
#include "foodieEditer.h"

class UiManager : public QObject
{
	Q_OBJECT

public:
	UiManager(QObject *parent = 0);
	~UiManager();

public slots:
	void uiMsgProc(UiMsgType type);

private:
	FoodieCover* m_fc;
	FoodieReader* m_fr;
	FoodieEditer* m_fe;

	
};

#endif // UIMANAGER_H
