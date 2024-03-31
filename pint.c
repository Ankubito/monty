#include "monty.h"
/**
 * v_pint - prints n value to the top of stack
 * @lead: point to the lead of stacks
 * @bouncer: line the number of stacks
*/
void v_pint(stack_t **lead, unsigned int bouncer)
{
	if (*lead == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*lead)->n);
}

