#pragma once

class Conteiner
{
public:
	int kepped_value;
	Conteiner *last, *next;
	Conteiner();
	Conteiner(int to_kepped);
	~Conteiner();

};