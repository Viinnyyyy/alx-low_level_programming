#include "main.h"

/**
 *print_most_numbers - prints most numbers*
 *
 *Desription: prints
 *
 *Return: Nothing
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		_putchar (a + '0');
		a++;
	}
	_putchar('\n');

}
