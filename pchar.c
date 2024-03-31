#include "monty.h"
/**
 * v_pchar - print char on top of stacks,followed by new line
 * @lead: pointing on top stack
 * @bouncer: line of number stack
*/
void v_pchar(stack_t **lead, unsigned int bouncer)
{
	stack_t *h;

	h = *lead;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
