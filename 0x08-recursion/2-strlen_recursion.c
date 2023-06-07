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
		return;
		_putchar('\0');
	}
	 _strlen_recursion(s + 1);
	n += 1;
	return (n);
}

