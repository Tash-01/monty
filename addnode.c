#include "monty.h"

/**
 * addnode - add node to head stack
 * @stack: head of stack
 * @n - new value
 * Return: no return
 */
void aadnode(stack_t **stack, int n)
{
	stack_t *new_node, val;

	aux = stack;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (val)
		val->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
