#include <stdio.h>

/**
 * _strcpy - Copy string
 * @dest: Array
 * @src: String to copy
 * Return: String copied
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (1)
	{
	dest[c] = src[c];
	if (src[c] == '\0')
		break;
	c++;
	}

	return (dest);
}
