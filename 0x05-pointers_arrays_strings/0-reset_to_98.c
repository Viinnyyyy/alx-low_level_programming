#include "main.h"

/**
 *
 *reset_to_98 - The function
 *
 *@n: integer
 *@*p: pointer
 *Return: *n
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	*p = n;
	*p = 98;
	return (*n);
}
