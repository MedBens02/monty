#include "monty.h"

/**
  *f_rotr- last elt of stack becomes first
  *@head: stack head
  *@counter: line count
 */
void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	(void) counter;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = *head;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	(*head) = tmp;
}
