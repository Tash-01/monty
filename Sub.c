#include "monty.h"

/**
 * sub_op - subtracts the top element of the stack from the second top
 * @stack: pointer to the top node of stack_t
 * @line_number: bytecodes file
 * Description:result is stored in the second top element of the stack
 *
 * Return: no return
 */
void sub_op(stack_t **stack, unsigned int line_number)
{
	stack_t *len;
	int x, tmp;

	len = *stack;
	for (nodes = 0; len != NULL)
		nodes++;

	len = len->next;
	if (nodes < 2)
	{
		printf(stderr, "L%u: can't sub, stack too short\n", line_number);
		close(hml.file);
		free(hml.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
