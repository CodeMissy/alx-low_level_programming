#include "main.h"

/**
 * string_toupper - changes all lowercase letters of
 * a string to uppercase
 * @s: string array
 * Return: string array
 */

/* the first for loop continues to print characters until it reaches null */

/* the if statement, if present character is lowercase, convert it to uppercase, 32 is used here because 32 is the difference between a and A, so subtracting 32 performs the conversion */

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
