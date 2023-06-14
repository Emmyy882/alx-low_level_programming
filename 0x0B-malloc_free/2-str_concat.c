#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - adds two strings together
 *
 * @newstr: the returning string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: concat of two strings
 */
char *_strcat(char *newstr, char *s1, char *s2)
{
	int i = 0, j = 0;


	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}


	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/**
 * _strlen - gets length of strings
 *
 * @s1: string one
 * 
 * Return: length of strings
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
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
	int len1, len2;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	newstr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	newstr = _strcat(newstr, s1, s2);
	return (newstr);
}
