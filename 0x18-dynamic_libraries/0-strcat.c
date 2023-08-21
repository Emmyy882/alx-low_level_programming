#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @str: stfing to concat
 * Return: concatenation of both strings
 */
char *_strcat(char *dest, char *str)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
