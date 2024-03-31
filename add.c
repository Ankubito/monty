#include "monty.h"
/**
 * v_add - add t2 stack element on top.
 * @lead: pointing to stack top
 * @bouncer: line of num current ops
*/
void v_add(stack_t **lead, unsigned int bouncer)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	h = *lead;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*lead = h->next;
	free(h);
}
