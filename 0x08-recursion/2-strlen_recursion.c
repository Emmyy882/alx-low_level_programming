#include "main.h"
/**
 * _strlen_recursion - gets the length of a string
 * @s: the string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
		_putchar('\0');
	}
	n++;
	 _strlen_recursion(s + 1);
	return (n);
}

