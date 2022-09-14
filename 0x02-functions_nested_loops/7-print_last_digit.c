#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@n: number to be printed
 *
 *Return: int.
 **/
int print_last_digit(int n)
{
	return (n >= 0 ? n : (n * -1) % 10);
}
