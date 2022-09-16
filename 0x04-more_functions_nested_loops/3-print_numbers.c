#include "main.h"

/**
 *print_numbers - function
 *
 *Return: void
 */
void print_numbers(void)
{
	char a = 0;

	for (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
