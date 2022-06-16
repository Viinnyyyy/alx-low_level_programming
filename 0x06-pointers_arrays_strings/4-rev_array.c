#include "main.h"
#include <string.h>

/**
 *reverse_array - reverses the order of the array
 *
 *@*a: pointer to the array
 *@n: number of array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	char temp, *bgn, *end;

	*bgn = 0;
	*end = strlen[n];

	for (i = 0; i < n && a[i] != '\0', i++)
	{
		temp = *bgn;
		*bgn = *end;
		*end = temp;

		bgn++;
		end--;
	}
}
