#include "main.h"
#include <stdlib.h>

/**
 * _islower - checks for a lowercase character
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
