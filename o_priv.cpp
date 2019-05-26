#include "o_priv.h"
#include "el.h"

void o_priv::process()
{
	double srGorm = 0.0;
	int first = 0;
	el* current = getHead();
	for (int i = 0; i < num(); i++)
	{
		srGorm += 1.0 / (double)current->x;
		current = current->prev;
	}
	srGorm = (double)num() / srGorm;
	current = getHead();
	while (current != NULL)
	{
		if ((current->x > srGorm))
		{
			first = current->x;
		}
		current = current->prev;
	}
	if (first)
		cout << "������ ������� ������ ��.����. " << first << endl;
	else
		cout << "�� ���" << endl;
	system("pause");
}

void o_priv::set(el* head) 
{
	setHead(head);
}

void o_priv::setNum(int num)
{
	setCount(num);
}
