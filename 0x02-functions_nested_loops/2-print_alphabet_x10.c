#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
char ch;
int n;

for (n = 0; n < 10; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
