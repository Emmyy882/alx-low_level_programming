#include "main.h"

/**
 * _isalpha - check letters if lowercase or uppercase
 * @c: The character to be checked
 * Return: 1 if true otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
