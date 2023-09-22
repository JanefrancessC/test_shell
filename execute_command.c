#include "shell.h"

/**
* execute_command - Executes a given input
* @argv: the argument vector parsed
* Return: nothing
*/

void execute_command(char **argv)
{
	char *input = NULL;

	if (argv)
	{
		input = argv[0];

		if (execve(input, argv, NULL) == -1)
			perror("Execve Error");
	}
}
