#include "monty.h"

/**
  *f_rotl- rotates the stack (top and last)
  *@head: stack head
  *@counter: line count
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *top = *head, *last;
	(void) counter;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	last = (*head)->next;
	last->prev = NULL;
	while (top->next != NULL)
	{
		top = top->next;
	}
	top->next = *head;
	(*head)->next = NULL;
	(*head)->prev = top;
	(*head) = last;
}
