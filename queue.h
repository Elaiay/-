#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class queue
{
	struct el *head; // ������ �������
	int count;
public:
	queue(){ head = NULL; count = 0;};
	int num(); // ���������� count
	void show();
	void put(); // ���������� ������ ��������
	void cut();
	void copy(queue *copy); // copy - ���� ����������� �������
	void sub(queue *first, queue *second); // ������� ������� firsh � second
	void countEdit(int num); // �������� ���������� ���������
	void setCount(int num);
	struct el* getHead(); // ��������� ������
	struct el* setHead(struct el* newHead); // ���������� ������
};

#include "o_pub.h"
#include "o_priv.h"
#include "o_prot.h"
