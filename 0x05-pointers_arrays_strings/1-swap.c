#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer used
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int d = *a;
*a = *b;
*b = d;
}
