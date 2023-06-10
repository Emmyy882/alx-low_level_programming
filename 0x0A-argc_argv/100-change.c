#include<stdio.h>
#include<stdlib.h>
/**
 * main - takes in arguments
 * @argc: stores the number of passed arguments
 * @argv: a string array for passed arguments
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int mod = 0;
	int res = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) > 24)
		{
			cents = atoi(argv[1]) / 25;
			mod = atoi(argv[1]) % 25;
			res = cents + mod;
			printf("%d\n", res);
		}
		else if (atoi(argv[1]) > 9 && atoi(argv[1]) < 24)
		{
			cents = atoi(argv[1]) / 10;
			mod = atoi(argv[1]) % 10;
			res = cents + mod;
			printf("%d\n", res);
		}
		else if (atoi(argv[1]) > 4 && atoi(argv[1]) < 9)
		{
			cents = atoi(argv[1]) / 5;
			mod = atoi(argv[1]) % 5;
			res = cents + mod;
			printf("%d\n", res);
		}
		else if (atoi(argv[1]) > 1 && atoi(argv[1]) < 4)
		{
			cents = atoi(argv[1]) / 2;
			mod = atoi(argv[1]) % 2;
			res = cents + mod;
			printf("%d\n", res);
		}
		else if (atoi(argv[1]) == 1)
		{
			printf("%d\n", 1);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	return (0);
}
