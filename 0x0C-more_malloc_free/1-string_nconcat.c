#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets length of string
 *
 * @s: string
 *
 * Return: lentgth of string
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
 * _strcat - joins two strings
 *
 * @newstr: the returning string
 *
 * @s2: string two
 *
 * @n: n bytes for s2
 * Return: newstr
 */
char *_strcat(char *newstr, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;

	while (newstr[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}

	newstr[i] = '\0';
	return (newstr);
}

/**
 * string_nconcat - concatenates strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: concat of both strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	int i = 0;
	char *newstr;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1); //length of s1
	len2 = _strlen(s2); //length of s2

	if (n >= len2)
	{
		n = len2;
	}

	newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}

	newstr = _strcat(newstr, s2, n);
	return (newstr);
}
