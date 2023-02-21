#include "main.h"

/**
 * _abs - function to print absolute number
 * @n: The parameter to be checked 
 */
int _abs(int n)
{
	int absolute;

	if (n == 1)
	{
		return (1);
	}
	else
	{
		absolute = ((n * 10) / (-10));
		return (absolute);
	}
}
