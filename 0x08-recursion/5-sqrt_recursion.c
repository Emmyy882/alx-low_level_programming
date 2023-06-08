#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: return the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion(n % 10);
}

