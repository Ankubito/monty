#include "monty.h"
/**
  *v_rotr- rotate stack by the bottom
  *@lead: pointing on stack top
  *@bouncer: line of num stack
 */
void v_rotr(stack_t **lead, __attribute__((unused)) unsigned int bouncer)
{
	stack_t *copy;

	copy = *lead;
	if (*lead == NULL || (*lead)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *lead;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*lead)->prev = copy;
	(*lead) = copy;
}
