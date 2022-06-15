#include "main.h"

/**
 **_strcat - concatenate strings
 *
 *@dest: destination
 *@src: source
	 *Return: char
	 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;
	size_t n = strlen(src);

	for (i = o; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
