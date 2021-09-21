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
if (argc < 2 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}
