#include "main.h"

/**
 * print_rev - prints a string in stdout in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		while (i >= 0)
			i--;
	}
	_putchar('\n');
}
