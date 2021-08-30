#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of simgle digit numbers
 * Return: 0
 */

int main(void)
{
int b;
for (b = '0'; b <= '9'; b++)
{
putchar(b);
if (b == '9')
continue;
 
putchar(',');
putchar(' ');
}
putchar('\n');
return(0);
}
