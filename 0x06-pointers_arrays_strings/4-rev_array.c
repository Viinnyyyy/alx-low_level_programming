#include "main.h"
#include <string.h>

/**
 *reverse_array - reverses the order of the array
 *
 *@a: pointer to the array
 *@n: number of array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
