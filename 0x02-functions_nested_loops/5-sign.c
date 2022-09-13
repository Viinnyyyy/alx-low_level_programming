#include "main.h"

/**
 *print_sign - check the code
 *@n: the ASCII equivakent
 *
 *Return: char.
 **/
int print_sign(int n)
{
	int x;

	if (x > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (x == 0)
	{
		x = 0;
		_putchar('0');
	}
	else
	{
		x = -1;
		_putchar('-');
	}

	return(x);
}
