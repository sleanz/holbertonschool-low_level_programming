#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	int i;

	char str[] = "putchar_";

	for (i = 0; str[i] != '\0'; i++)

		putchar(str[i]);
	putchar('\n');

	return (0);
}
