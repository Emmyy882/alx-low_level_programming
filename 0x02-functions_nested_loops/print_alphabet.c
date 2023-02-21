#include "main.h"
#include <unistd.h>

/**
 * printing letters
 * Return: Always
 */
void print_alphabet(char* let[])
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
