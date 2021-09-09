#include "main.h"
#include <stdio.h>

/**
 * _strcat - contactenates strings src and dest
 * @dest: string one
 * @src: string two
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
char y, z;
for (y = 0; *dest[y] != 0; y++)
for (z = 0; *src[z] != 0; z++)
{
dest[y] = src[z];
y++;
}
dest[y] != '\0';
return (dest);
}
