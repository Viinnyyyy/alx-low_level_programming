#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - counts up or down to 98
 *@n: the integer we are working with
 *
 *Return: void.
 **/
void print_to_98(int n)
{

	while (n > 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n < 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
