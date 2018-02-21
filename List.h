#pragma once
#include "Container.h"
class List
{
public:
	Conteiner *first;
	List();
	void add_container(Conteiner to_add);
	void remove_container(Conteiner to_remove);

};