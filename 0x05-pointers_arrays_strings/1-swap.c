#include "main.h"

/**
 * swap_int - swaps paramter values
 * @a: first parameter
 * @b: second parameter
 * Return; empty
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
