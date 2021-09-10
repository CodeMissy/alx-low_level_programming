#include "main.h"

/**
 * _strcat - contactenates strings src and dest
 * @dest: string to concatenated to
 * @src: string to be concatenated
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
_putchar(*dest);
_putchar(*src);
_strcat(8dest, *src);
_putchar(*dest); 
return (dest);
}
