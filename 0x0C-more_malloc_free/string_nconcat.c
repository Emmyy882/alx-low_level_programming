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
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: newstr
 */
char *_strcat(char *s1, char *s2, int concatlen)
{
	int i = 0, j = 0;

	//copying s1 to newstr
	while (s1[i] != '\0')
	{
		i++;
	}

	while (j < concatlen)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i] = '\0';
	return (s1);
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

	concatlen = n;
	newstr = malloc(sizeof(char) * (len1 + concatlen + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	newstr = _strcat(s1, s2, concatlen);

	return (newstr);
}
