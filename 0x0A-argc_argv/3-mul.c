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
if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else printf("Error\n");
return (1);
}
