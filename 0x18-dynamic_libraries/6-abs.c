#include "main.h"

/**
 * _abs - Checks the parameter
 * @n: The parameter to be checked
 * Return: a positive number
 */
int _abs(int n)
{
	int absolute;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		absolute = ((n * 10) / (-10));
		return (absolute);
	}
}
