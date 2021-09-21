#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: counts number of arguments
 * @argv: array storing arguments used in program
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
