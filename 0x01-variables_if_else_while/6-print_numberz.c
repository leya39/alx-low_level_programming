#include <stdio.h>

/**
 * main - print all singl numners followed by char
 *
 * Return: Always 0
 */
int(void)
{
	int num;

	for (num = 0; num < 10; num;++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
