#include "shell.h"

/**
*execute_command - Executes a given input
*@agrv: the argument vector parsed
*Return: nothing
*/

void execute_command(char **argv)
{
	char *cmd = NULL;

	if (argv)
	{
		cmd = argv[0];
		
		if (execve(cmd, argv, NULL) == -1)
			perror("Error: ");
	}
}
