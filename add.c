#include "monty.h"

/**
 * f_add - adds top two elts of the stack.
 * @head: stack head
 * @counter: line counter
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int sum;

	error_handle(head, 'A', counter);

	hd = *head;
	sum = hd->n + hd->next->n;
	hd->next->n = sum;
	*head = hd->next;
	free(hd);
}
