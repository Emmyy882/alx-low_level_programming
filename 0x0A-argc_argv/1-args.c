#include<stdio.h>
#include<stdlib.h>
/**
 * main - receives arguments
 * @argc: holds the number of arguments passed
 * @argv: an array of string arguments
 * Return: the number or arguments passed
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum = argv[i];
	}
	printf("%d\n", sum);
	return (0);
}
