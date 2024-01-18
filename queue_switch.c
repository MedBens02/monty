#include "monty.h"

/**
 * f_queue_switch - switches to queue mode
 * @head: stack head
 * @counter: line count
*/
void f_queue_switch(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	util.flag = 1;
}

/**
 * add_dnodeint_end - add node to the end of stack
 * @head: head of the stack
 * @n: new value
*/
void add_dnodeint_end(stack_t **head, int n)
{
	stack_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		tmp->next = new;
		new->prev = tmp;
	}
}
