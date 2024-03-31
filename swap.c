#include "monty.h"
/**
 * v_swap - add s2 top element of stack
 * @lead: pointer to the stack head
 * @bouncer: line of num current
*/
void v_swap(stack_t **lead, unsigned int bouncer)
{
	stack_t *h;
	int len = 0, aux;

	h = *lead;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	h = *lead;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
