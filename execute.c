#include "monty.h"
/**
* execute - execute opcode of stack
* @stack: pointing to head linked list stack
* @bouncer: line of bouncer stack
* @formate: pointing monty file stack
* @fate: line of fate stack
* Return: no return
*/
int execute(char *fate, stack_t **stack, unsigned int bouncer, FILE *formate)
{
	instruction_t opst[] = {
				{"push", v_push}, {"pall", v_pall}, {"pint", v_pint},
				{"pop", v_pop},
				{"swap", v_swap},
				{"add", v_add},
				{"nop", v_nop},
				{"sub", v_sub},
				{"div", v_div},
				{"mul", v_mul},
				{"mod", v_mod},
				{"pchar", v_pchar},
				{"pstr", v_pstr},
				{"rotl", v_rotl},
				{"rotr", v_rotr},
				{"queue", v_queue},
				{"stack", v_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(fate, " \n\t");
	if (op && op[0] == '#')
		return (0);
	cuz.dog = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, bouncer);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", bouncer, op);
		fclose(formate);
		free(fate);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
