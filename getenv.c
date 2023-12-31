#include "shell.h"

/**
*_getenv - searches for the env variable specified
*@name: the env variable to retrieve
*Return: pointer to the value of env variable
**/

char *_getenv(const char *name)
{
	/* extern char **environ; */
	int i;
	size_t name_len = _strlen(name);

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strncmp(environ[i], name, name_len) == 0 &&
		    environ[i][name_len] == '=')
			return (environ[i] + name_len + 1);
	}
	return (NULL);
}
