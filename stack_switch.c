#include "monty.h"

util_t util = {NULL, NULL, NULL, 0};
/**
 * f_stack_switch - switches to stack mode
 * @head: stack head
 * @counter: line count
*/
void f_stack_switch(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	util.flag = 0;
}
