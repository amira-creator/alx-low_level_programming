#include "main.h"

/**
 * swap_int - swaps the values of two interger using
 * two input parametres
 * @a: input paramerter 1
 * @b: input paramerter 2
 * Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
