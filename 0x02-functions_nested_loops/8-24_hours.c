#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			printf("%d:%d\n", i, j);
		}
	}
}

