#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to the prog
 * @argc: argument counter
 * @argv: stores array of argumments used in d prog
 * Return: 0
 */

int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
printf("%s\n", argc);
}
