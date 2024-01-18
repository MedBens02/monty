#include "monty.h"


/**
 * error_handle - handles error messages
 * @head: head of stack
 * @type: type of operation
 * @counter: line count
 */
void error_handle(stack_t **head, const char type, unsigned int counter)
{
	stack_t *hd;
	int len = 0;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		len++;
	}
	if (len < 2)
	{
		switch (type)
		{
		case 'A':
			fprintf(stderr, "L%d: can't add, stack too short\n", counter);
			break;
		case 'D':
			fprintf(stderr, "L%d: can't div, stack too short\n", counter);
			break;
		case 'M':
			fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
			break;
		case 'S':
			fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
			break;
		case 's':
			fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
			break;
		case 'm':
			fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
			break;
		}
		fclose(util.file);
		free(util.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
}

/**
 * err_zero - handles error messages /, % by 0
 * @head: head of stack
 * @counter: line count
 */
void err_zero(stack_t **head, unsigned int counter)
{
	fprintf(stderr, "L%d: division by zero\n", counter);
	fclose(util.file);
	free(util.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
