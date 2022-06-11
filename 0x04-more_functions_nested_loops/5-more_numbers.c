#include "main.h"
/**
 *more_numbers - function
 *
 *@a: for the lines
 *@b: for the numbers
 *Return: void
 *
 */

void more_numbers(void)
{
	int a = 0, b;

	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar(b + '0');
			b++;

		}
		_putchar('\n');
		b++;

	}
}
