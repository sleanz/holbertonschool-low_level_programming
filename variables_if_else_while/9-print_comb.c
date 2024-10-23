#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	putchar(ch + '0');
		if (ch < 10)

	{
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}


