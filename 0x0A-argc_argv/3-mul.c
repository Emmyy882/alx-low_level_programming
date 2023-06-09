#include<stdio.h>
#include<stdlib.h>
/**
 * main - receives arguments
 * @argc: stores the number of arguments
 * @argv: a string array for storing arguments
 * Return: product of arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
