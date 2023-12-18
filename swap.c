#include "monty.h"

/**
 * swap - swap top two elements of stack
 * @stack: the stack
 * @line_number: number of the line being read
 **/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = (*stack)->next;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first->next = second->next;
	second->next = first;
	*stack = second;
}