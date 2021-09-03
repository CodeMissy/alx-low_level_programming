#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description - prints the FizzBuzz Program
 * Fizzz for multiples of 3, Buzz - multiples of 5,
 * FizzBuzz for multiples of 15
 *
 * Return: void
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
if (i % 15 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
printf("\n");
}
