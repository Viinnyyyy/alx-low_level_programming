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
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;

	}
	return (str);
}
