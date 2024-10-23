#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	putchar('\n');
	return (0);
}
