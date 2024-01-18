#include "monty.h"


/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	return (0);
}
