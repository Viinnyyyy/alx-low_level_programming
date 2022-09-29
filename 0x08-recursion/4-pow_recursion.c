#include "holberton.h"

/**
 * _pow_recursion - does the power thing
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int ret = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	ret *= _pow_recursion(x, y - 1);

	return (ret);
}
