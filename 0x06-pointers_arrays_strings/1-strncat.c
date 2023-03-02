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
        int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
