#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - Entry point of program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int result, num1, num2, check1, check2, check3, check4, check5;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	check1 = strcmp(argv[2], "+");
	check2 = strcmp(argv[2], "-");
	check3 = strcmp(argv[2], "*");
	check4 = strcmp(argv[2], "/");
	check5 = strcmp(argv[2], "%");

	if (!check1 && !check2 && !check3 && !check4 && !check5)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((check4 || check5) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2])(num1, num2));

	printf("%d\n", result);
	return (0);
}
