#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: result of compared strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
