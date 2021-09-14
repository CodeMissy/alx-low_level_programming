#include "main.h"

/**
 * _memset - fills the memory with a const byte
 * @n: first byte filled
 * @b: pointed to by char *s
 * @s: pointer returns here
 * Return: resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}

return (s);
}
