#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 *
 *
 * Return: void
 */

void more_numbers(void)
{
int a, b;
for (a = 0; a <= 15; a++)
{
for (b = 0; b < 15; b++)
{
if (b >= 10)
_putchar(b / 10 + 48);
_putchar(a % 10 + 48);
}
_putchar('\n');
}
}
