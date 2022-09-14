#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@n: number to be printed
 *
 *Return: int.
 **/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		a = -1 * (n % 10);
	}

	else
	{
		a = n % 10;
	}


	putchar(a + '0');
	return (a);
}
