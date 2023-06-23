#include "monty.h"

/**
 * pint_error - prints the value at the top of the stack
 * @stack: stack head
 * @line_number: bytecodes where error occured
 *
 * Return: no return
 */
int pint_error(stack_t **stack, unsigned int line_number)
{
	stack_t *p;

	if (*stack == NULL)
	{

		printf(stderr, "L%u: can't pint, stack empty\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->next;
}
