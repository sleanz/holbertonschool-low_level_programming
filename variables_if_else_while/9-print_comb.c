#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	char  ch;

	for (ch = '0'; ch < 10 ; ch++)
	putchar(ch + '0');
	if (ch < '9')
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}


