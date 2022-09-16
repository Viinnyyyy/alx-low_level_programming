#include "main.h"
/**
 *print_numbers - function
 *
 *Return: void
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putcihar('\n');
}
