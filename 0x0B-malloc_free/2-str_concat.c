#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - gets length of strings
 * @s1: string one
 * @s2: string two
 * Return: length of both strings
 */
int _strlen(char *s1, char *s2)
{
	int len;
	int len1;
	int len2;
	
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	len = len1 + len2;
	return (len);
}

/**
 * str_concat - adds string
 * @s1: first string
 * @s2: second string
 * Return: concatenation of both strings
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len;
	char *dest;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	len = _strlen(s1, s2);
	dest = (char *)malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		if (s1[i] != '\0')
		{
			dest[i] = s1[i];
		}
	}
	dest[i++] = ' ';
	j = 0;
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i++] = '\0';
	return (dest);
}
