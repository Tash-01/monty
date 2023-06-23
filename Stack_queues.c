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
	bus.lifi = 0;

}

/**
 * queue_op - prints the top
 * @stack: pointer to the top node of stack_h
 * @line_number: line number of bytecodes file
 *
 * Return: no return
 */
void queue_op(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @stack: head of the stack
 *
 * Return: no return
 */
void addqueue(stack_t **stack, int n)
{
	stack_t *new_node, *emp;

	emp = *stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (emp)
	{
		while (emp->next)
			emp = empx->next;
	}
	if (!emp)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		emp->next = new_node;
		new_node->prev = emp;;
	}
}
