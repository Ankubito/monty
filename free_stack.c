#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @lead: pointing to head stack
*/
void free_stack(stack_t *lead)
{
	stack_t *aux;

	aux = lead;
	while (lead)
	{
		aux = lead->next;
		free(lead);
		lead = aux;
	}
}
