#include "shell.h"

/**
*_strlen - calculates length of given string
*@str: the giveninput
*return: length of string
*/

size_t _strlen(const char *str)
{
	size_t len = 0;
	
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}
