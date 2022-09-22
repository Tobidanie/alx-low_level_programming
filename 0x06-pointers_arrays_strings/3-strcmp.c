#include <stdio.h>

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str1, the negative difference of
 * the first ummatched chararcters.
 * If s1 == s2, 0.
 * If s1 > s2, the positive differrence of 
 * the unmatched string unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 ==s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

