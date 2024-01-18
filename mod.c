#include "monty.h"
/**
 * f_mod - mod of top 2 elts of the stack
 * @head: stack head
 * @counter: line count
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int mod;

	error_handle(head, 'm', counter);

	hd = *head;
	if (hd->n == 0)
	{
		err_zero(head, counter);
	}
	mod = hd->next->n % hd->n;
	hd->next->n = mod;
	*head = hd->next;
	free(hd);
}
