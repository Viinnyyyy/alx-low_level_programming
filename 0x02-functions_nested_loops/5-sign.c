#include "main.h"

/**
 *print_sign - check the code
 *@n: the ASCII equivakent
 *
 *Return: char.
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	{
		n = -1;
		_putchar('-');
	}

	return (n);
}
