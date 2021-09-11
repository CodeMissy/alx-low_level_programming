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
int n = 0;
while (dest[n] != '\0') {
dest[n] = src[n];
n++;
}
dest[n] = '\0'
}
