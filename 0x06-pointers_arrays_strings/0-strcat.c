#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the first string 
 * @src: second string to concat
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
