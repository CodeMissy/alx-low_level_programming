#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: reversed string
 */

void print_rev(char *s)
{
int c;
for (c = c - 1; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
