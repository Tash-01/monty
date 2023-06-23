#include "monty.h"

/**
 * rotl_op - rotates the stack to the top
 * @stack: pointer to the top node of stack_h
 * @line_number: line number of bytecode file
 *
 * Return: no return
 */
void rotl_op(stack_t **stack, unsigned int line_number)
{
	stack_t *emp = *stack, *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	temp = (*stack)->next;
	temp->prev = NULL;
	while (emp->next != NULL)
	{
		emp = emp->next;
	}
	emp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = emp;
	(*stack) = temp;
}
