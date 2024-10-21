#include <stdio.h>
/**
 *main - test c
 *
 *Return: toujours (0)
 */
int main(void)
{
int a;
float b;
long int c;
long long int d;
char e;
	printf("size of int: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of float: %lu bytes\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
	printf("size of char: %lu  bytes\n", (unsigned long)sizeof(e));
	return (0);
}
