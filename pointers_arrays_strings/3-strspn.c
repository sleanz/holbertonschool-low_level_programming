#include "main.h"
/**
 * _strspn - Gets the length of the initial segment of a string that consists
 *           only of characters from another string.
 * @s: The string to be searched.
 * @accept: The string containing characters to match against.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 *         of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
