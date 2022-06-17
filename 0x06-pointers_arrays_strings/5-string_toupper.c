#include "main.h"
#include <string.h>
/**
 *string_toupper - changes string to upper
 *
 *@str: pointer
 *Return: character
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] >= 'a' && str[i] <= 'z'; i++)
	{
		str[i] = str[i] - 32;

	}
	return (str);
}
