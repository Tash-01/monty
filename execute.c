#include "monty.h"
/**
 * execute - execute the opcode
 * @stack: head linked list
 * @line_number: line_number
 * @file: pointer to monty file
 * Return: return 1 on success
 */
int execute(stack_t **stack, unsigned int line_number, FILE *file)
{
	instruction opst[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", pint_error},
		{"pop", pop_error},
		{"add", add_error},
		{"nop", nop_error},
		{"sub", sub_op},
		{"div", div_op},
		{"mul", mul_op},
		{"mod", mod_op},
		{"pchar", pchar_op},
		{"pstr", pstr_op},
		{"rotl", rotl_op},
		{"rotr", rotr_op},
		{"swap", swap_error},
		{"stack", stack},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *ex;

	f = strtok(content, "\n\t");
	if (ex && ex[0] == '#')
		return (0);
	hml.arg = strtok(NULL, "\n\t");
	while (opst[i].opcode && ex)
	{
		if (strcmp(ex, opst[i].opcode) == 0)
		{
			opst[i].(stack, line_number);
			return (0);
		}
		i++;
	}
	if (ex && opst[i].opcode == NULL)
	{
		printf(stderr, "L%u: unknown instruction %s\n", line_number, ex);
		close(file);
		free(line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
