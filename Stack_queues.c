#include "monty.h"

/**
 * stack_op - sets the format of the data to a stack (LIFO)
 * @stack: pointer to the top node of stack_h
 * @line_number: line number of bytecodes file
 *
 * Return: no return
 */
void stack_op(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	(void)line_number;
}

/**
 * queue_op -  sets the format of the data to a queue (FIFO)
 * @stack: pointer to the top node of stack_t
 * @line_number: line number of bytecodes file
 *
 * Return: no return
 */
void queue_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
