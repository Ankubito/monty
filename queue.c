#include "monty.h"
/**
 * v_queue - print on stack top
 * @lead: pointing on stack top
 * @bouncer: line of numb stack
*/
void v_queue(stack_t **lead, unsigned int bouncer)
{
	(void)lead;
	(void)bouncer;
	cuz.cage = 1;
}

/**
 * add_queue - add the node on tail stack
 * @n: store new value of node
 * @lead: pointing stack top
 * Return: void
*/
void add_queue(stack_t **lead, int n)
{
	stack_t *new_node, *aux;

	aux = *lead;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*lead = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
