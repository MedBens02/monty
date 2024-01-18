#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct util_s - variables -args, file, line content
 * @value: data to insert
 * @file: pointer to monty file
 * @content: line content
 * @flag: 0 for stack and 1 for queue
 * Description: carries values through the program
 */
typedef struct util_s
{
	char *value;
	FILE *file;
	char *content;
	int flag;
}  util_t;
extern util_t util;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void open_file(char *name);
void read_line(FILE *file);
int execute_line(char *content, stack_t **head,
	unsigned int counter, FILE *file);

void free_stack(stack_t *head);
void add_dnodeint(stack_t **head, int n);
void add_dnodeint_end(stack_t **head, int n);


void error_handle(stack_t **hd, const char type, unsigned int counter);
void err_zero(stack_t **hd, unsigned int counter);


void f_push(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, unsigned int counter);

void f_stack_switch(stack_t **head, unsigned int counter);
void f_queue_switch(stack_t **head, unsigned int counter);



#endif
