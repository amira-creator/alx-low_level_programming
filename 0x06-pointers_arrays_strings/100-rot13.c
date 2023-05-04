#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i;
	char letters1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letters2[] = "nopqrstuvwxyzabcdefghijklmNOPQRsTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == letters1[i])
			{
				*s = letters2[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
