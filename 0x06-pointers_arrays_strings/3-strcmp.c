#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 **_strcmp - compare string
 *
 *
 *@s1: first string
 *@s2: second string
 *Return: char
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char c1, c2;

	while (s1 == s2)
	{
		c1 = *s1++;
		c2 = *s2++;

		if (c1 == '\0')
		{
			return (c1 - c2);
		}
	}
	return (c1 - c2);
}
