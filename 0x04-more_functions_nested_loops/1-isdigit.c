#include "main.h"

/**
 *_isdigit - something
 *
 *@c: character
 *Return: return integer
 */

int _isdigit(int c)
{
	int c;
	int ret;

	if (c >= 0 && c <= 9)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
