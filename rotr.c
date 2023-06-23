#include "monty.h"

/**
 * rotr_op - rotates the stack to the bottom
 * @stack: pointer to the bottom node of stack_h
 * @line_number: line number of bytecodes file
 *
 * Return: no return
 */
void rotr_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	copy = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	(*stack) = temp;
