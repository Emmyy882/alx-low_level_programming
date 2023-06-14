#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - make a copy of passed string
 * @dest: where to copy string to
 * @str: the string variable
 * Return: copy of str
 */
char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _strlen - gets length of string
 * @src: the string
 * Return: length of string
 */
int _strlen(char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strdup - makes duplicate of a string
 * @str: the source string
 * Return: copy of string
 */
char *_strdup(char *str)
{
	unsigned int len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	copy = _strcpy(copy, str);
	return (copy);
}	
