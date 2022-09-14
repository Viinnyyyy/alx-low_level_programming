#include "main.h"

/**
 *times_table - print times table
 *@void: no input nor output
 *
 *Return: void.
 **/
void times_table(void)
{
	int a = 0;
	int n = 0;
	int times = a * n;

	while (a <= 9)
	{
		while (n < 10)
		{
			_putchar('0' + times);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			
			n++;
		}
		_putchar('\n');
		a++;
	}

}
