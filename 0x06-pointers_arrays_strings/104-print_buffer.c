#include "main.h"
#include <stdio.h>
/**
 * isprintableASCII - determine if n is a printable ASCII
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int isprintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * printHexes - print hex value for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printASCII - print  ascii values for string by b,
 * formatted to replace non printable character with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int ch, i;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isprintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}
/**
 * print_buffer - print a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
