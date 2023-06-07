#include "main.h"
/*
 * _print_rev_recursion: prints the reverse of a string
 * @s: the string
 * Return: 0 returns string in reverse order
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
	_putchar('\n');
}
