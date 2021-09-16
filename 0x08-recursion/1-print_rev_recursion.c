#include "main.h"

/**
 * _print_rev_recursion - reverses string
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
}
