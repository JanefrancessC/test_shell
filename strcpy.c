#include "shell.h"

/**
*_strcpy - Custom strcpy function
*@dest: Destination buffer to receive the copied string
*@src: The source of string to be copied
*Return: Destination pointer (dest)
*/

char *_strcpy(char *dest, const char *src)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
