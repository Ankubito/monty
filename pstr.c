#include "monty.h"
/**
 * v_pstr - print string starts on stack top,followed by line
 * @lead: pointing on stack top
 * @bouncer: line of num stack
*/
void v_pstr(stack_t **lead, unsigned int bouncer)
{
	stack_t *h;
	(void)bouncer;

	h = *lead;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
