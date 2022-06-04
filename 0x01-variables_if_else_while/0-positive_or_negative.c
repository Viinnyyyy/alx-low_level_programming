#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 **/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("input number\n");
	scanf("%d", &n);

	if (n > 0)
	{
		printf("The number is positive\n");
	}
	elseif(n == 0)
	{
		printf("The number is zero\n");
	}
	else
		printf("The number is negative\n");
	/* your code goes there */
	return (0);
}
