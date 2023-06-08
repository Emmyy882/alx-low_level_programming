#include "main.h"
/**
 * isPrimeRecursive - test a number if it is prime
 * @divisor: checks if n is divisible by certain numbers
 * is_prime_number - checks is a number is prime
 * @n: the number
 * Return: 1 if prime or 0 if not prime
 */
int isPrimeRecursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
        	return (1);
    	}
    	if (n % divisor == 0)
    	{
        	return (0);
    	}
    	return isPrimeRecursive(n, divisor - 1);}

int is_prime_number(int n)
{
	return isPrimeRecursive(n, n - 1);
}

