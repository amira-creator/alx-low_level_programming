#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: string paramerter input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
