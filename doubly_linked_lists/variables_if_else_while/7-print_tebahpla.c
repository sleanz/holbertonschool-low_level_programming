#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
