#include <stdio.h>
#include "monty.h"
cuz_t cuz = {NULL, NULL, NULL, 0};
/**
* main - monty the code of interpret
* @argc: pointing numb of argnts
* @argv: monty the file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *fate;
	FILE *formate;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int bouncer = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	formate = fopen(argv[1], "r");
	cuz.formate = formate;
	if (!formate)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		fate = NULL;
		#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
		read_line = getline(&fate, &size, formate);
		cuz.fate = fate;
		bouncer++;
		if (read_line > 0)
		{
			execute(fate, &stack, bouncer, formate);
		}
		free(fate);
	}
	free_stack(stack);
	fclose(formate);
return (0);
}
