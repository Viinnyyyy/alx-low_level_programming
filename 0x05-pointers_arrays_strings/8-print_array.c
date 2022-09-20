#include "main.h"
#include <std.io>

/**
 * print_array - code
 * @a: ibt
 * @n: int
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}


