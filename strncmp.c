#include "shell.h"

/**
*_strncmp - compares two strings based on n characters
*@str1: first string to compare
*@str2: second string to compare
*@n: max no of characters to compare
*Return: 0 on Success
*/

int _strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 - != *str2)
			return *str1 - *str2;
		str1++;
		str2++;
		n--;
	}
	return (0);
}

