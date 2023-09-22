#include "shell.h"

/**
 *main - Accepts commands as input, executes
 *and displays the results
 *Return: 0 on Success
 */

int main(int argc, char **argv)
{
	char *input = NULL, *input_copy = NULL;
	size_t input_size = 0;
	ssize_t input_read;
	const char *delim = " \n";
	char *token;
	int i = 0, n_tokens = 0;

(void)argc;

	while (1)
	{
		printf(PROMPT " ");
		input_read = getline(&input, &input_size, stdin);

/* Allocate space for input-copy */
		input_copy = malloc(sizeof(char) * input_read);
		if (input_copy == NULL)
		{
			perror("malloc error");
			return (-1);
		}
		_strcpy(input_copy, input);

		if (input_read == -1)
		{
			printf("Exiting ...\n");
			return (-1);
		}
		else
		{
			token = strtok(input, delim);
			
			while (token != NULL)
			{
				n_tokens++;
				token = strtok(NULL, delim);
			}
		}
		n_tokens++;

		argv = malloc(sizeof(char *) * n_tokens);
		token = strtok(input_copy, delim);

		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			_strcpy(argv[i], token);

			token = strtok(NULL, delim);
		}
		argv[i] = NULL;

/*		printf("%s\n", input); */
		for (i = 0; argv[i] !=NULL; i++)
		{
			free(argv[i]);
		}		
		free(argv);
	}
	free(input_copy);
	free(input);
	return (0);
}
