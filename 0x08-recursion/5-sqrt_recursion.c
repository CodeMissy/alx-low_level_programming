#include "main.h"

/**
 * _sqrt_recursion - finds square root of a num
 * @n: num
 * @mid: middle value
 * @high: high value
 * @low: low value
 * Return: square root
 */

int _sqrt_recursion(int n)
{
int low, int high;
int mid = low + high / 2;
if (mid * mid <= n))
return (mid);
else
return (_sqrt_recursion (low, mid - 1, n));
}
