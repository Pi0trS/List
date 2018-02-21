#include "Container.h"

Conteiner::Conteiner()
{
	last = next = nullptr;
}
Conteiner::Conteiner(int to_kepped)
{
	kepped_value = to_kepped;
	last = next = nullptr;
}