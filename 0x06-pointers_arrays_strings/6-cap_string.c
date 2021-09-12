#include "main.h"

/**
 * cap_string - capitalizes first character of
 * every words of a string
 * @str: string
 * Return: return string
 */

char *cap_string(char *str)
{
int i;
/* capitalize first character of words */
for (i = 0; str[i] != '\0'; i++)
{
/* check first character is lowercase alphabet */
if ((str[i] >= 'a' && str[i] <= 'z'))
str[i] = str[i] - 32; /* - 32 to make it capital */
continue; /* continue to the loop */
}
if
(str[i] == ' ') /* check space */
(str[i] == '\t')
(str[i] == '\n')
(str[i] == ',')
(str[i] == ';')
(str[i == '.')
(str[i] == '!')
(str[i] == '?')
(str[i] == '"')
(str[i] == '(')
(str[i] == ')')
(str[i] == '{')
(str[i] == '}')
{
/* if quotations is found, check next character */
++i;
}
return (s);
}
