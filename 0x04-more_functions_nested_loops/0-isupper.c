#include "main.h"

/**
 *_isupper - gets upper cased letters
 *
 *@c: character
 *Return: 1 if upper and 0 if not
 */

int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
