#include "monty.h"

/**
 * push - pushes new node on top of the stack
 * @stack: double pointer to top of stack
 * @line_number: number of the line read
 **/

void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	int num = 0;
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;
	*stack = new_node;
}
