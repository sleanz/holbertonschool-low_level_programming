#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i == 2) || (i == 4))
{
continue;
}
_putchar(i + '0');
}
_putchar('\n');
}
