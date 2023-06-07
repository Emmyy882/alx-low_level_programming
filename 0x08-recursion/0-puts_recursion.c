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
		return;
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
