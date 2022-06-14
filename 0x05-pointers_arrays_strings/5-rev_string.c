#include "main.h"
#include <string.h>
/**
 *rev_string - print reveerse
 *
 *@s: string
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i)
	{
		_putchar(s[--i]);
	}
}
