#include "main.h"
/**
 * *_strchr - function
 *
 *@s: char
 *@c: char
 *Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
