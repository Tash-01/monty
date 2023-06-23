#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/type.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - double linked list representation of stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack
 * @next: points to the next element of the stack
 *
 * Description: double linked list structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct hml_s - variables(args, file, line_number)
 * @arg: value
 * @file: pointer to monty file
 * @line_number: current working linw number of a Monty bytecode file
 * @shif: flag change stack (queue)
 * Description: carries value through the code
 */
typedef struct hml_s
{
	char *arg;
	FILE *file;
	char *line_number;
	int shif;
} hml_t;
extern hml_t hml;

/**
 * struct instruction_s - opcode and function
 * @opcode: the opcode
 * @op: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*op)(stack_t **stack, unsigned int line_number);
} instruction_t;
void add_error(stack_t **stack, unsigned int line_number);
void div_op(stack_t **stack, unsigned int line_number);
void mul_op(stack_t **stack, unsigned int line_number);
void mod_op(stack_t **stack, unsigned int line_number);
void nop_error(stack_t **stack, unsigned int line_number);
void pchar_op(stack_t **stack, unsigned int line_number);
int pint_errors(stack_t **stack, unsigned int line_number);
int pop_error(stack_t **stack, unsigned int line_number);
void pstr_op(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void rotl_op(stack_t **stack, unsigned int line_number);
void rotr_op(stack_t **stack, unsigned int line_number);
void sub_op(stack_t **stack, unsigned int line_number);
void swap_error(stack_t **stack, unsigned int line_number);
void stack_op(stack_t **stack, unsigned int line_number);
void queue_op(stack_t **stack, unsigned int line_number);

#endif
