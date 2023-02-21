#include "main.h"

/**
 * _abs(int) - function to print absolute number
 * int - parameter 
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
		absolute = (n * 10) / -10;
		return absolute;
	}
}
