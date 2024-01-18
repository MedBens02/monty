#include "monty.h"

/**
 * f_swap - swaps top two elements of the stack.
 * @head: stack head
 * @counter: line count
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int tmp;

	error_handle(head, 's', counter);

	hd = *head;
	tmp = hd->n;
	hd->n = hd->next->n;
	hd->next->n = tmp;
}
