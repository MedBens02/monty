#include "monty.h"

/**
 * add_dnodeint - add node to the head stack
 * @head: head of the stack
 * @n: new_value
*/

void add_dnodeint(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	*head = new;
}
