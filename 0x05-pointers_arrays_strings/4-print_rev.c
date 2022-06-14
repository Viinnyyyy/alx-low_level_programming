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
	char *a, *z, temp;
	j = strlen(*s) - 1;

	while (i < j)
	{
		temp = *a;
		*a = *b;
		*b = temp;

		i++;
		j--;

		puts(*c);
	}
	_putchar('\n');
}
