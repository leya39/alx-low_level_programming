#include <stdio.h>

/**
 * main - print all singel numnbers
 *
 * Return: Always 0
 */
int(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
