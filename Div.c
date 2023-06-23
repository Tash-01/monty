#include "monty.h"

/**
 * div_op - divides the second top element of the stack
 * @stack: pointer to the top node of stack_t
 * @line_number: working line number of a bytecodes file
 *
 * Return: no return
 */
void div_op(stack_t **stack, unsigned int line_number)
{
	stack *p;
	int s = 0, len;

	h = *stack;
	while (p)
	{
		p = p->next;
		s++;
	}
	if (s < 2)
	{
		printf(stderr, "L%d: can't div, stack too short\n", line_number);
		close(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	if (p->n == 0)
	{
		printf(stderr, "L%d: division by zero\n", line_number);
		close(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	len = p->next->n;
	p->next->n = len;
	*stack = p->next;
	free(p);
}
