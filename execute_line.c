#include "monty.h"
/**
 * execute_line - executes the opcode line
 * @stack: head of the linked list (stack)
 * @counter: line counter
 * @file: poiner to monty file
 * @content: line content
 * Return: Nothing
*/
int execute_line(char *content, stack_t **stack,
	unsigned int counter, FILE *file)
{
	instruction_t fcts[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop}, {"swap", f_swap}, {"add", f_add},
				{"nop", f_nop}, {"sub", f_sub}, {"div", f_div}, {"mul", f_mul},
				{"mod", f_mod}, {"pchar", f_pchar}, {"pstr", f_pstr},
				{"rotl", f_rotl}, {"rotr", f_rotr}, {"queue", f_queue_switch},
				{"stack", f_stack_switch}, {NULL, NULL}
			};
	unsigned int i = 0;
	char *code;

	code = strtok(content, " \n\t");
	if (code != NULL && code[0] == '#')
		return (0);
	util.value = strtok(NULL, " \n\t");
	for (i = 0; fcts[i].opcode && code; i++)
	{
		if (strcmp(code, fcts[i].opcode) == 0)
		{
			fcts[i].f(stack, counter);
			return (0);
		}
	}
	if (code && fcts[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, code);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
