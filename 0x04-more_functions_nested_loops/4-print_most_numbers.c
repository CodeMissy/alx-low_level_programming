#include "main.h"

/**
 * print_most_numbers - prints numbers without 2 & 4
 * Return: print numbers
 */

void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
if (c != 2 && c != 4)
_putchar(c);
_putchar('\n');
}
