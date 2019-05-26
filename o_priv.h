#pragma once
#include "queue.h"

class o_priv : private queue
{
public:
	void set(el* head);
	void setNum(int num);
	void process();
};