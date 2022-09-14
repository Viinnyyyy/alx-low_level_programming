#include "main.h"

/**
 *times_table - print times table
 *@void: no input nor output
 *
 *Return: void.
 **/
void times_table(void)
{
	int a;
	int n;
	int times = a * n;

	for (a = 0; a < 10; a++)
	{
		while (n < 10)
		{
			_putchar(times);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}

}
