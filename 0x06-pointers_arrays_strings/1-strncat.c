#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destinatiin string
 * @src: string to be appended
 * @n: the maximum number of characters to be appended
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
        strncat(dest, src, n);
	return (dest);
}