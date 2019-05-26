#pragma once
#include "queue.h"

class o_prot : protected queue
{
public:
	void set(el* head);
	void setNum(int num);
	void process();
};