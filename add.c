#include "monty.h"

/**
 * add - adds first two elements of stack
 * @stack: the stack
 * @line_number: number of the line being read
 **/

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;

	if (first == NULL || first->next == NULL)
	{
		fprintf(stderr, "L%u:can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first->n = first->n + second->n;
	first->n + second->n = first;
	free(second);
}
