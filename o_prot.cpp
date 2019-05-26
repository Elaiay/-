#include "o_prot.h"
#include "el.h"

void o_prot::process()
{
	int razm = 0;
	el* current = getHead();
	int min = current->x, max = current->x;
	for (int i = 0; i < num(); i++)
	{
		if (!(i % 2))
		{
			if (current->x < min)
			{
				min = current->x;
			}
			if (current->x > max)
			{
				max = current->x;
			}
		}
		current = current->prev;
	}
	cout << "Max и Min равен : " << max << " "<< min << endl;
	cout << "Размах равен : " << max-min << endl;
	system("pause");
}

void o_prot::set(el* head)
{
	setHead(head);
}

void o_prot::setNum(int num)
{
	setCount(num);
}