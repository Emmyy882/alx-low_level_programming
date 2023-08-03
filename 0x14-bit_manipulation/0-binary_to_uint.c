#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int.
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int k = 1;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			result += k;
		}
		k *= 2;
	}
	return (result);
}
