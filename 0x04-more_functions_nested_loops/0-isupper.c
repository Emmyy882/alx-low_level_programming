#include "main.h"

/**
 * _isupper - Takes the parameter
 * c: The character to be checked
 * Return; 1 if isupper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

