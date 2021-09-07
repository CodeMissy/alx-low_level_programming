#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: reversed string
 */

void print_rev(char *s)
{
int len = 0, c;
while (s[c++])
len++;
for (c = len - 1; c >= 0; c--)
_putchar(s[c]);
_putchar('\n');
}
