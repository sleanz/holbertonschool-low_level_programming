#include "main.h"
/**
 * _strdup - Duplicates a string in a newly allocated memory space
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
	char *cpy;
	int index, len = 0;

	if (str == NULL)
		return (NULL);


	for (index = 0; str[index]; index++)
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);


	for (index = 0; str[index]; index++)
		cpy[index] = str[index];

	cpy[len] = '\0';

	return (cpy);
}
