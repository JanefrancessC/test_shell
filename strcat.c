#include "shell.h"

/**
*_strcat - concatenates src string to the end of dest
*@dest: destination to which the src will be appended
*@src: source string to be appended to dest
*Return: pointer to the new contenated string
*/

char *strcat(const char *dest, const char *src)
{
	char *new_dest;
	size_t dest_len;
	size_t src_len;
	
	if (dest == NULL || src == NULL)
		return (NULL);
}
