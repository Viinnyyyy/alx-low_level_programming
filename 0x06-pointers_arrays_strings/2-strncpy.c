#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 **_strncpy - concatenate strings
 *
 *@n: maximum characters from src
 *@dest: destination
 *@src: source
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{	
		dest[i] = '\0';
	}
	return (dest);
}
