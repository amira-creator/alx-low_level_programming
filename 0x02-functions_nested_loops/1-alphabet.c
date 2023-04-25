#include "main.h"

/**
 * main -Entery point
 *  print_alphabet - using putchar prototype
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
