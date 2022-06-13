#include "main.h"

/**
 *swap_int - swaps integers
 *
 *@a: 1st value
 *@b: 2nd value
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
