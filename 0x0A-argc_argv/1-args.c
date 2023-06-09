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
	int i = atoi(argv[argc]);

	printf("%d\n", (i - 1));
	return (0);
}
