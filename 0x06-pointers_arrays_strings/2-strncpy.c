#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string to copy from
 * @dest: destination to copy to
 * @n: number of bytes used while copying
 * Return: copied string to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
