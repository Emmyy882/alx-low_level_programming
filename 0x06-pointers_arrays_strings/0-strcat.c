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
	strcat(dest, str);
	return (dest);
}
