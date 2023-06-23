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
	int len = 0, emp;

	h = *stack;
	while (p)
	{
		p = p->next;
		len++;
	}
	if (len < 2)
	{
		printf(stderr, "L%d: can't swap, stack too short\n", line_number);
		close(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	p = *stack;
	emp = p->n;
	p->n = p->next->n;
	p->next->n = emp
}
