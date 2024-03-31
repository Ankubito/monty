#include "monty.h"
/**
  *v_sub- prints substraction onto stack
  *@lead: pointing to stack top
  *@bouncer: line of numb stack
 */
void v_sub(stack_t **lead, unsigned int bouncer)
{
	stack_t *aux;
	int sus, nodes;

	aux = *lead;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE);
	}
	aux = *lead;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*lead = aux->next;
	free(aux);
}
