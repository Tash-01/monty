#include "monty.h"

/**
 * add_error -  adds the top two elements of the stack.
 * @stack: A pointer to the top node of a stack_t linked list
 * @line_number: working line number of a bytecode file
 * Description: The result is stored in the second top element of the
 * stack, and the top element is removed.
 *
 * Return: no return
 */
void add_error(stack_t **stack, unsigned int line_number)
{
	stack_t *p;
	int s = 0, len;

	p = *stack;
	while (p)
	{
		p = p->next;
		s++;
	}
	if (s < 2)
	{
		printf(stderr, "L%d: can't add, stack too short\n", line_number);
		close(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	p = *stack;
	len = p->n + p->next->n;
	p->next->n = len;
	*stack = p->next;
	free(p);
}
