#include "List.h"

List::List()
{
	first = nullptr;
}

void List::add_container(Conteiner to_add)
{
	if (first == nullptr)first = &to_add;
	else
	{
		Conteiner *temp = first;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		to_add.last = temp;
		temp->next = &to_add;
	}
}