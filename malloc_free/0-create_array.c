#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}

