#include "main.h"

/**
 * int _isupper(int c) - gets upper cased letters
 *
 *Return : 1 if upper and 0 if not
 */

int _isupper(int c)
{
	for ( c >= 65 || c <= 90)
	{
		return (1);
	}
	return (0);
}
