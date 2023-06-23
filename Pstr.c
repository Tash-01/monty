#include "monty.h"

/**
 * pstr_op - prints the string starting at the top of the stack
 * @stack: pointer to the top node of the stack_t
 * @line_number: working line number of bytecodes file
 *
 * Return: no return
 */
void pstr_op(stack_t **stack, unsigned int line_number)
{
	stack_t *p;
	(void)line_number;

	p = *stack;
	while (p)
	{
		if (p->n > 127 || p->n <= 0)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}
