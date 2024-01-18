#include "monty.h"
/**
 * f_div - divides top two elements of the stack.
 * @head: stack head
 * @counter: line count
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int div;

	error_handle(head, 'D', counter);

	hd = *head;
	if (hd->n == 0)
	{
		err_zero(head, counter);
	}
	div = hd->next->n / hd->n;
	hd->next->n = div;
	*head = hd->next;
	free(hd);
}
