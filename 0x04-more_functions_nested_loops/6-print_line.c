#include "main.h"

/**
 * print_line - prints line
 *
 * @n: line number
 * Return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
