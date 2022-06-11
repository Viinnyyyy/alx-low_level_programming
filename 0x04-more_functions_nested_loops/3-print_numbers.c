#include "main.h"

/**
 *print_numbers - function
 *
 *@a: number
 *Return: void
 */
void print_numbers(void)
{
	int a;

	a = 0;
	for (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
