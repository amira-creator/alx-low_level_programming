#include "main.h"
#include <unistd.h>
/**
 * main - Entery point
 * print_alphabet - using putchar prototype
 * Return: 0
 */
void print_alphabet(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }
        _putchar('\n');
}
