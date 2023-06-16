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
 * Return: newstr
 */
char *_strcat(char *newstr, char *s2, int concatlen)
{
	int i = 0, j = 0;

	while (newstr[i] != '\0')
	{
		i++;
	}

	while (j < concatlen)
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
	unsigned int len1, len2, concatlen;
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

	concatlen = 0; //concat length n bytes
		       //of s2
	if (n >= len2)
	{
		concatlen = len2;
	}
	else
	{
		concatlen = n;
	}

	newstr = malloc(sizeof(char) * (len1 + concatlen + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}

	newstr = _strcat(newstr, s2, concatlen);
	return (newstr);
}
