#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - receives arguments
 * @argc: number of arguments passed to function
 * @argv: array of string arguments
 * Return: the arguments passed
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", *argv);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s", argv[i]);
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
