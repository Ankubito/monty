#include "monty.h"
/**
 * v_mul - print and multiply 2mul on stack top
 * @lead: pointing to stack top
 * @bouncer: line of numb
*/
void v_mul(stack_t **lead, unsigned int bouncer)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	h = *lead;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*lead = h->next;
	free(h);
}

