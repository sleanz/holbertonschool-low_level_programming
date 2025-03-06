#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - Locates the first occurrence in a string of any of the characters
 *            from another string.
 * @s: The string to be searched.
 * @accept: The string containing characters to match.
 *
 * Return: A pointer to the first occurrence of any character from accept in s,
 *         or NULL if no character from accept is found in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
