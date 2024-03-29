#include "main.h"
/**
 * _puts_recursion - prints a string with a new line
 * @s: stores the string
 * Return: 0, prints the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
