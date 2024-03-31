#include "monty.h"
/**
 * v_pop - prints the the stack top
 * @lead: pointing to the stack top
 * @bouncer: the number of line current ops
*/
void v_pop(stack_t **lead, unsigned int bouncer)
{
	stack_t *h;

	if (*lead == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	h = *lead;
	*lead = h->next;
	free(h);
}
