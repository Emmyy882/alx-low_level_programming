#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3)
	{
		return (NULL);
	}

	if (argc > 3)
	{
		return (NULL);
	}

	if (argv == NULL)
	{
		return (NULL);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = (*get_op_func(argv[2])(num1, num2));

	return (result);
}
