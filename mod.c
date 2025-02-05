#include "monty.h"
/**
 * v_mod - print and compute divs top elemnt
 * @lead: pointing to stack top
 * @bouncer: line of numbers
*/
void v_mod(stack_t **lead, unsigned int bouncer)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	h = *lead;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*lead = h->next;
	free(h);
}

