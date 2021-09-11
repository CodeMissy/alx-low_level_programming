#include "main.h"

/**
 * _strncat - contactenates two strings
 * @dest: string to be contacenated to
 * @src: string to be contacenated
 * @n: number of bytes  used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int n = 0;
while (dest[n] != '\0')
{
dest++;
}
if (i = 0; i < n; && src[i] != '\0';  i++)
dest[n + i] = src[i];
return (dest);
}
