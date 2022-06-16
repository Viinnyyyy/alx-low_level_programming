#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 **_strncat - concatenate strings
 *
 *@dest: destination
 *@src: source
	 *Return: char
	 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
