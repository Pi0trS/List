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

void List::remove_container(Conteiner to_remove)
{
	Conteiner *temp = first;
	Conteiner *remove_this;
	if (first = nullptr) return;
	else if (first->kepped_value == to_remove.kepped_value)
	{	
		remove_this = first;
		first = temp->next;
		first->last = nullptr;
		delete remove_this;
		remove_this = nullptr;
		return;
	}
	else 
	{
		while (temp->next->next != nullptr)
		{
			if(temp->next->kepped_value == to_remove.kepped_value)
			{
				  remove_this = temp->next ;
				  temp->next->next->last = temp;
				  temp->next = temp->next->next;
				  delete remove_this;
				  remove_this = nullptr;
				  return;
			}
			temp = temp->next;
		}
		if (temp->next->kepped_value == to_remove.kepped_value)
		{
			delete temp->next;
			temp->next = nullptr;
			return;
		}
	}
}