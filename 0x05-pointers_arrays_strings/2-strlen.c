#include "holberton.h"

/**
 * _strlen - returns the length of string
 * @s: the string to be measured
 * Return: length of s
 */

int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
{
count++;
}
return (count);
}
