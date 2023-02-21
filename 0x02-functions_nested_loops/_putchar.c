#include "main.h"
#include <unistd.h>

/**
 * _putchar -  writes the character a to stdout
 *
 * Return: On Success 1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
