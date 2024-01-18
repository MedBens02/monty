#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: line count
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	if (hd == NULL)
		return;
	while (hd != NULL)
	{
		printf("%d\n", hd->n);
		hd = hd->next;
	}
}
