#include "main.h"
#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	int i;

	char words[] = " _putchar";

	for (i = 0; i < 9 ; i++)

		putchar(words[i]);
	putchar('\n');

	return (0);
}
