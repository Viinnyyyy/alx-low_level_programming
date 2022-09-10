#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 **/
int main(void)
{
	int n;
	int hex;


	for (n = 0; n < 10; n++)
	{
		putchar(n % 10 + '0');
	}

	for (hex = 'a'; n <= 'f'; hex++)
	{
		putchar(hex);
	}

	putchar('\n');

	return (0);
}
