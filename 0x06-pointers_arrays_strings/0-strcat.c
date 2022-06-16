#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 **_strcat - concatenate strings
 *
 *@dest: destination
 *@src: source
	 *Return: char
	 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;
	size_t n = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
