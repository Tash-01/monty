#include "monty.h"

/**
 * pchar_op - prints the char at the top of the stack
 * @stack: A pointer to the top node of stack_t linked list
 * @line_number: working line number of bytecodes file
 *
 * Return: no return
 */
void pchar_op(stack_t **stack, unsigned int line_number)
{
	stack_t *p;

	p = *stack;
	if (!p)
	{
		printf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (p->n 127 || p->n < 0)
	{
		printf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", p->n);
}
