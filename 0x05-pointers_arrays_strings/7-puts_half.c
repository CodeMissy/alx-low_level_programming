#include "main.h"

/**
 * puts_half - prints only half of a string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
i = i / 2;
_putchar(str[i]);
i++;
}
_putchar('\n');
}
