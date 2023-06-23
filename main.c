#include "monty.h"

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		printf(stderr, " USAGE: monty file\n");

		exit(EXIT_FAILURE);
	}
	file = open(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		printf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		line_number = NULL;
		read_line = getline(&line_number, &size, file);
		bus.content = content;
		line_number++;
		if (read_line > 0)
		{
			execute(content, &stack, line_number, file);
		}
		free(content);
	}
	free_stack(stack);
	close(file);
	return (0);
}
