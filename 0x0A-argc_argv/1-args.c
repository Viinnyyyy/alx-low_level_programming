#include <stdio.h>
#include <stdlib.h>
/**
 *main -  self explanatory
 *@argc: argument count
 *@argv: argument vector
 *Return: number of arguments passed
 */
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	return(argc)
}

