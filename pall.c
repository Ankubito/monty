#include "monty.h"
/**
 * v_pall - print to stack top
 * @lead: pointing to stack top
 * @bouncer: nothing used
*/
void v_pall(stack_t **lead, unsigned int bouncer)
{
	stack_t *h;
	(void)bouncer;

	h = *lead;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

