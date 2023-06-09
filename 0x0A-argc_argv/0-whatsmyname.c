#include<stdio.h>
#include<stdlib.h>
/**
 * main - receives arguments
 * @argc: stores the number of arguments passed to function
 * @argv: takes an array of string arguments
 * Return: the arguments passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
