#include "main.h"
/**
 * leet - change vowel to numbers
 * @s: analized string
 * Return: string with all vowels changed
 */
char *leet(char *s)
{
	char a[] = "aeotLAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 0; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
