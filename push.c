#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: list head
 * @counter: line number
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, isint = 0;


	if (util.value != NULL)
	{
		if (util.value[0] == '-')
			j++;

		for (; util.value[j] != '\0'; j++)
			if (util.value[j] > 57 || util.value[j] < 48)
				isint = 1;
	}

	if (util.value == NULL || isint == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(util.file);
		free(util.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(util.value);
	if (util.flag == 0)
		add_dnodeint(head, n);
	else
	{
		add_dnodeint_end(head, n);
	}
}
