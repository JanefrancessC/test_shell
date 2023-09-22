#include "shell.h"

/**
*execute_command - Executes a given input
*@agrv: the argument vector parsed
*Return: nothing
*/

void execute_command(char **argv)
{
	char *input = NULL, *command = NULL;

	if (argv)
	{
		input = argv[0];
		command = pathfinder(input);
		
		if (execve(command, argv, NULL) == -1)
			perror("Execve Error");
	}
}
