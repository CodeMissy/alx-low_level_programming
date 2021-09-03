#include "main.h"

/**
 * print_square - prints a square
 * @size: number of times # is printed
 */

void print_square(int size)
{
int a, b;
for (a = 0; a <= size; a++)
{
for (b = 0; b <= size; b++)
_putchar('#');
}
_putchar('\n');
}
