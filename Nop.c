#include "monty.h"

/**
 * nop_error - doesn’t do anything
 * @stack: pointer to the top node
 * @line_number: bytecodes file
 *
 * Return: no return
 */
void nop_error(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;
}
