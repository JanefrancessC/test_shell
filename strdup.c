#include "shell.h"

/**
*_strdup - duplicates input string
*@str: input to be duplicated
*Return: Pointer to newly duplicated string
*/

char *_strdup(const char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str) + 1;
	new_str = malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	_strcpy(new_str, str);
	return new_str;
}
