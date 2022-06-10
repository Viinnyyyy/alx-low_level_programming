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

	for (a = 0; a <= 9)
	{
		_putchar(a + ' ');
		a++;
	}
	_putchar('\n');
}
