#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared with s2
 * @s2: string to be compared with s1
 * Return: compared string
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
