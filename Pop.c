#include "monty.h"

/**
 * pop_error - removes the top element of the stack.
 * @stack: the stack head
 * @line_number: script where error occured
 *
 * Return: Always EXIT_FAILURE
 */
int pop_error(stack_t **stack, unsigned int line_number)
{
	stack_t *p;

	if (*stack == NULL)
	{

		printf(stderr, "L%d: can't pop an empty stack\n", line_number);
		close(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	p = *stack;
	*stack = p->next;
	free(p);
}
