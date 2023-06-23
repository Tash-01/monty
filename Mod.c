#include "monty.h"

/**
 * mod_op - multiplies the second top element of the stack
 * @stack: pointer to the too node of stack_t
 * @line_number: working line number of bytecodes file
 *
 * Return: no return
 */
void mod_op(stack_t **stack, unsigned int line_number)
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
		printf(stderr, "L%u: can't mod, stack too short\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	p = *stack;
	len = p->next->n;
	p->next->n = len;
	*stack = p->next;
	free(p);
}
