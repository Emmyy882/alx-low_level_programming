#include<stdio.h>
#include<stdlib.h>
/**
 * main - takes in arguments
 * @argc: stores the number of passed arguments
 * @argv: a string array of arguments
 * Return: addition of arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	else
	{
		for(i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0  && atoi(argv[i]) <= 9)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

