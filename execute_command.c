#include "shell.h"

/**
<<<<<<< HEAD
*execute_command - Executes a given input
*@agrv: the argument vector parsed
*Return: -1 0n error or 0 on success
=======
* execute_command - Executes a given input
* @argv: the argument vector parsed
* Return: nothing
>>>>>>> 53ab6c1c76f4369fe076f4c3433c903f8f13dc1d
*/

int execute_command(char **argv)
{
	char *input = NULL, *command = NULL;

	if (argv)
	{
		input = argv[0];

<<<<<<< HEAD
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
=======
		if (execve(input, argv, NULL) == -1)
>>>>>>> 53ab6c1c76f4369fe076f4c3433c903f8f13dc1d
			perror("Execve Error");
			free(command);
			return (-1);
		}
		free(command);	
	}
	return (0);
}
