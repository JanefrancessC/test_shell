#include "shell.h"

/**
*_strchr - searches for first occurence of 'c' is a str
*@str: string to search in
*@c: The charcter to find
*Return: pointer to the occurence
*/

char *_strchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == c)
			return (char *)str;
		str++;
	}
	return (NULL);
}
