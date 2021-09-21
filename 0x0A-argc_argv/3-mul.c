#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: stores array of arguments passed
 * Return: 0 but if error return 1
 */

int main(int argc, char *argv[])
{
int a, b, mul;
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a * b;
if (argc <= 2)
{
printf("Error\n");
return (1);
}

printf("%d\n", mul);
return (0);
}
