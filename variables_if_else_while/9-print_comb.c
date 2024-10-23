#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
	int  ch;

	for (ch = '0'; ch < 10 ; ch++)
		putchar(ch + '0'); /* affiche le chiffre actuel*/
	if (ch <= 9) /* verifie que ce n'est pas le dernier chiffre*/
		putchar(','); /*ajoute une ,*/
	putchar(' '); /* ajoute un espace*/
	putchar('\n');
	return (0);
}


