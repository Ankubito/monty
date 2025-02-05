#include "monty.h"
/**
 * add_node - add nodes on stack top
 * @lead: pointing on top stack
 * @n: add new value to stack
 * Return: no return
*/
void add_node(stack_t **lead, int n)
{

	stack_t *new_node, *aux;

	aux = *lead;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *lead;
	new_node->prev = NULL;
	*lead = new_node;
}
