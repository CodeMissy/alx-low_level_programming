#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
int i, j;
if (n < 0)
_putchar('\n');
{
for (i = 0; i <= n; i++)
_putchar('\\');
{
for (j = 0; j <= n; j++)
_putchar(' ');
}
_putchar('\n');
}
}
