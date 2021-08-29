#include <stdio.h>
#include <stdlib.h>

/**
 * main - this string prints lowercase alphabets followed by uppercase alphabets.
 * Return: 0
 */

int main(void)
{
int ch;
for(ch= 'a'; ch<= 'z'; ch++)
putchar(ch);
putchar('\n');

for(ch= 'A'; ch<= 'Z'; ch++)
putchar(ch);
putchar('\n');

return (0);
} 
