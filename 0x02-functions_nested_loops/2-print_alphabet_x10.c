#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
int ch, n;
n = 0;
while(n < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
n++;
}
_putchar('\n');
} 
}
