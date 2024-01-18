#define _GNU_SOURCE
#include "monty.h"

util_t util = {NULL, NULL, NULL, 0};

/**
 * open_file - opens a file
 * @name: the file namepath
 */
void open_file(char *name)
{
	FILE *file;

	file = fopen(name, "r");
	util.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", name);
		exit(EXIT_FAILURE);
	}
	read_line(file);
}


/**
 * read_line - reads lines and wxwcutes them
 * @file: the monty file
 */
void read_line(FILE *file)
{
	ssize_t line = 1;
	char *buffer;
	size_t size = 0;
	unsigned int counter = 0;
	stack_t *stack = NULL;

	while (line > 0)
	{
		buffer = NULL;
		line = getline(&buffer, &size, file);
		util.content = buffer;
		counter++;
		if (line > 0)
		{
			execute_line(buffer, &stack, counter, file);
		}
		free(buffer);
	}
	free_stack(stack);
	fclose(file);
}
