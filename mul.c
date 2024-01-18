#include "monty.h"

/**
 * f_mul - multiplies top two elements of the stack.
 * @head: stack head
 * @counter: line_count
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int prod;

	error_handle(head, 'M', counter);

	hd = *head;
	prod = hd->next->n * hd->n;
	hd->next->n = prod;
	*head = hd->next;
	free(hd);
}
