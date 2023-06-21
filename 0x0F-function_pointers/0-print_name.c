#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - call back function to print name
 * @name: parameter that holds passed value
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
