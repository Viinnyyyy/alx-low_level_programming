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


	for (n = 0; n < 10;)
	{
		putchar(n % 10 + '0');
		n++;
	}

	for (hex = 'a'; n <= 'f';)
	{
		putchar(hex);
		hex++;

	}

	putchar('\n');

	return (0);
}
