#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single hexadecimal digits in lowercase
 * Return: 0
 */

int main(void)
{
int i = 48;
for (i = 48; i < 58; i++)
putchar(i);
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
