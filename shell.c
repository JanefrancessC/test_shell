#include "shell.h"

/**
 *main - Accepts commands as input, executes
 *and displays the results
 *@argc: arg count
 *@argv: arg vector" array pointer to arg
 *Return: 0 on Success
 */

int main(int argc, char **argv)
{
	char *input = NULL, *input_copy = NULL, *token;
	size_t input_size = 0;
	ssize_t input_read;
	const char *delim = " \n";
	int i = 0, n_tokens = 0;
	(void)argc;
	
	while (1)
	{
		printf(PROMPT " ");
		input_read = getline(&input, &input_size, stdin);
		if (input_read == -1)
			return (-1);
		input_copy = malloc(sizeof(char) * input_read);
		if (input_copy == NULL)
		{	
			perror("malloc error");
			return (-1);
		}
		_strcpy(input_copy, input);
		token = strtok(input, delim);
		while (token != NULL)
		{			
			n_tokens++; 
			token = strtok(NULL, delim);
		}
		n_tokens++;
		argv = malloc(sizeof(char *) * n_tokens);
		token = strtok(input_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * _strlen(token));
			_strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		
		if (_strncmp(argv[0], "exit", _strlen("exit")) == 0)
		{
			execute_exit(input, input_copy, argv);
		}
		else if (_strncmp(argv[0], "env", _strlen("env")) == 0)
		{
			execute_env();
		}
		else
			execute_command(argv);
	}
	free(input_copy);
	free(input);
	return (0);
}
