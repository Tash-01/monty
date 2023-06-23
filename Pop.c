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

		printf(stderr, "L%u: can't pop an empty stack\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	p = *stack;
	*stack = p->next;
	free(p);
}
