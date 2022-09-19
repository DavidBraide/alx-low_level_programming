#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	return (a);
}
