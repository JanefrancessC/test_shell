#include "shell.h"

void execute_exit(char *input, char *input_copy, char **argv)
{
	free(input);
	free(input_copy);
	free(argv);
	exit(0);
}

void execute_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
