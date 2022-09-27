#include "main.h"
/**
 *_memset - function
 *@n: counter
 *@s: char
 *@b: char
 *Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
