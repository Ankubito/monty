#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>

/* Doubly linked list representation of a stack (or queue) */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct cuz_s - variable -dog, formate, fate and cage
 * @dog: value of stacks
 * @formate: pointer to the monty files
 * @fate: line of the fate
 * @cage: flag the changes stack <-> queue
 * Description: carry out values through program
 */

/* Structure to carry out values through program */
typedef struct cuz_s
{
    char *dog;
    FILE *formate;
    char *fate;
    int cage;
} cuz_t;

extern cuz_t cuz;

/* Opcode and its function */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Function prototypes */
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int formate);
char *clean_line(char *fate);
void v_push(stack_t **lead, unsigned int number);
void v_pall(stack_t **lead, unsigned int number);
void v_pint(stack_t **lead, unsigned int number);
int execute(char *fate, stack_t **lead, unsigned int bouncer, FILE *dog);
void free_stack(stack_t *lead);
void v_pop(stack_t **lead, unsigned int bouncer);
void v_swap(stack_t **lead, unsigned int bouncer);
void v_add(stack_t **lead, unsigned int bouncer);
void v_nop(stack_t **lead, unsigned int bouncer);
void v_sub(stack_t **lead, unsigned int bouncer);
void v_div(stack_t **lead, unsigned int bouncer);
void v_mul(stack_t **lead, unsigned int bouncer);
void v_mod(stack_t **lead, unsigned int bouncer);
void v_pchar(stack_t **lead, unsigned int bouncer);
void v_pstr(stack_t **lead, unsigned int bouncer);
void v_rotl(stack_t **lead, unsigned int bouncer);
void v_rotr(stack_t **lead, unsigned int bouncer);
void add_node(stack_t **lead, int n);
void add_queue(stack_t **lead, int n);
void v_queue(stack_t **lead, unsigned int bouncer);
void v_stack(stack_t **lead, unsigned int bouncer);

#endif /* MONTY_H */

