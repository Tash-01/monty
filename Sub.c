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
	stack_t *emp;
	int len, noded;;

	emp = *stack;
	for (nodes = 0; len != NULL)
		nodes++;

	emp = emp->next;
	if (nodes < 2)
	{
		printf(stderr, "L%d: can't sub, stack too short\n", line_number);
		close(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	emp = *stack;
	len = emp->next->n - emp->n;
	emp->next->n = len;
	*stack = emp->next;
	free(emp);
}
