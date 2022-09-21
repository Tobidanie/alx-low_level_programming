#include <stdio.h>

/**
 * puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */

void puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
