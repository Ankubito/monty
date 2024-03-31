#include "monty.h"
/**
  *v_rotl- rotate to stack top
  *@lead: pointing on stack top
  *@bouncer: line of num stack
 */
void v_rotl(stack_t **lead,  __attribute__((unused)) unsigned int bouncer)
{
	stack_t *tmp = *lead, *aux;

	if (*lead == NULL || (*lead)->next == NULL)
	{
		return;
	}
	aux = (*lead)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *lead;
	(*lead)->next = NULL;
	(*lead)->prev = tmp;
	(*lead) = aux;
}
