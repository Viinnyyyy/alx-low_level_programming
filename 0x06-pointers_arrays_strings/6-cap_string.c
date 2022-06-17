#include "main.h"
/**
 * cap_string - Capitalizes string
 *
 *@ptr: String to be altered
 *Return: returns char
 */
char *cap_string(char *ptr)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ' ' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}')
			{
				str[i] -= 32;
			}
			i++;
		}
	}
	return (str);
}
