#pragma once
#pragma pack(1)

enum UiMsgType
{
	UI_MSG_NON,

	//cover
	COVER_CLICK,

	//reader
	READER_SWITCH_TO_EDITER,

	//editer
	EDITER_SWITCH_TO_READER,

};

#pragma pack()

#define DEL(p) {delete p; p = NULL;}