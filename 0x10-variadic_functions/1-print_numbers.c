#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers seperated by a seperator
 * @seperator: seperator
 * @n: integer
 * @...: does something
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");

	va_end(nums);
}
