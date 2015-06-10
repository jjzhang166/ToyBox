#include "foodieui.h"
#include "uimanager.h"

FoodieUi::FoodieUi(UiManager* um, QObject *parent)
	: QObject(parent)
{
	QMetaObject::Connection qc = connect(this, &FoodieUi::uiMsgSender, um, &UiManager::uiMsgProc);
	if(qc)
	{
		m_cnQ.push_back(qc);
	}
}

FoodieUi::~FoodieUi()
{
	for(QQueue<QMetaObject::Connection>::iterator it = m_cnQ.begin();
		it != m_cnQ.end();
		it++)
	{
		disconnect(*it);
	}
}
