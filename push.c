#include "monty.h"
/**
 * v_push - add n node stack
 * @lead: pointing to stack top
 * @bouncer: line of numb stack
*/
void v_push(stack_t **lead, unsigned int bouncer)
{
	int n, i = 0, flag = 0;

	if (cuz.dog)
	{
		if (cuz.dog[0] == '-')
			i++;
		for (; cuz.dog[i] != '\0'; i++)
		{
			if (cuz.dog[i] > 57 || cuz.dog[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", bouncer);
			fclose(cuz.formate);
			free(cuz.fate);
			free_stack(*lead);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", bouncer);
		fclose(cuz.formate);
		free(cuz.fate);
		free_stack(*lead);
		exit(EXIT_FAILURE); }
	n = atoi(cuz.dog);
	if (cuz.cage == 0)
		add_node(lead, n);
	else
		add_queue(lead, n);
}
