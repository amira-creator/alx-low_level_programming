#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes th echaracter c to stdout
 * @c: the caharacter to print
 * Return: on success 1
 * on error , -1 is reaturned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
