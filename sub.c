#include "monty.h"

/**
 * f_sub- substracts top two elts of the stack.
 * @head: stack head
 * @counter: line count
*/
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int diff;

	error_handle(head, 'S', counter);

	hd = *head;
	diff = hd->next->n - hd->n;
	hd->next->n = diff;
	*head = hd->next;
	free(hd);
}
