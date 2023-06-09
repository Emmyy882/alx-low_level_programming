#include<stdio.h>
#include<stdlib.h>
/**
 * main - takes arguments
 * @argc: takes the number of arguments
 * @argv: a string array to store passed arguments
 * Return: success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	printf("\n");
	return (0);
}
