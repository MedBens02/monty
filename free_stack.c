#include "monty.h"

/**
 * free_stack - frees the stack
 * @head: head of the list
 */
void free_stack(stack_t *head)
{
	stack_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
