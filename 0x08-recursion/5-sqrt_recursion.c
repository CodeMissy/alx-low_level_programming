#include "main.h"

/**
 * _sqrt_recursion - finds square root of a num
 * @n: num
 * Return: square root
 */

int _sqrt_recursion(int n)
{
int i;
if (i < 0)
return (-1);
if (i == 0)
return (1);
if (i < 1)    
return (_sqrt_recursion (n, i + 1) / n);
else
return (_sqrt_recursion (n, i + 1) * n);
}
