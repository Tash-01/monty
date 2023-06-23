#include "monty.h"

/**
 * swap_error - swaps the top two elements of the stack
 * @stack: A pointer to the top node of stack_t linked list
 * @line_number: working line number of bytecodes file
 *
 * Return: no return
 */
void swap_error(stack_t **stack, unsigned int line_number)
{
	stack_t *p;
	int s = 0, len;

	h = *stack;
	while (p)
	{
		p = p->next;
		s++;
	}
	if (s < 2)
	{
		printf(stderr, "L%u: can't swap, stack too short\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	p = *stack;
	len = p->n;
	p->n = p->next->n;
	p->next->n = len;
}
