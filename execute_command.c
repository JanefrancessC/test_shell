#include "shell.h"

/**
*execute_command - Executes a given input
*@agrv: the argument vector parsed
*Return: -1 0n error or 0 on success
*/

int execute_command(char **argv)
{
	char *input = NULL, *command = NULL;

	if (argv)
	{
		input = argv[0];

		if (_strchr(input, '/') != NULL)
		{		
			command = _strdup(input);
		}
		else
		{
			command = pathfinder(input);
		}

		if (command == NULL)
		{
			perror("No such file or directory");
			return (-1);
		}

		if (access(command, X_OK) == -1)
		{
			perror("Permission denied by dev");
			free(command);
			return (-1);
		}
		if (execve(command, argv, NULL) == -1)
		{	
			perror("Execve Error");
			free(command);
			return (-1);
		}
		free(command);	
	}
	return (0);
}
