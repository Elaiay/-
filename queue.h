#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class queue
{
	struct el *head; // начало очередь
	int count;
public:
	queue(){ head = NULL; count = 0;};
	int num(); // возвращает count
	void show();
	void put(); // добавление нового элемента
	void cut();
	void copy(queue *copy); // copy - Куда скопировать очередь
	void sub(queue *first, queue *second); // сложить очередь firsh и second
	void countEdit(int num); // Изменить количество элементов
	void setCount(int num);
	struct el* getHead(); // Получение головы
	struct el* setHead(struct el* newHead); // Установить начало
};

#include "o_pub.h"
#include "o_priv.h"
#include "o_prot.h"
