#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: stores array of arguments passed
 * Return: 0 but if error return 1
 */

int main(int argc __argument__((unused)), char *argv[])
{
int a, b, mul;
if (argv <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b= atoi(argv[2]);
mul = a * b;
printf("%d\n", mul);
return (0);
}
