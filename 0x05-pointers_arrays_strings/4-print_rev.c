#include "main.h"
#include <string.h>
/**
 *print_rev - print reveerse
 *
 *@s: string
 *Return: void
 */
void print_rev(char *s)
{
	int i = 0, j = 0;
	char *a, *b, temp;
	j = strlen(char *s) - 1;

	while (i < j)
	{
		temp = *a;
		*a = *b;
		*b = temp;

		i++;
		j--;

		_puts(char *s);
	}
	_putchar('\n');
}
