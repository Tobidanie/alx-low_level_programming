#include <stdio.h>

/**
 * _strlen - checks the lengthof a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
