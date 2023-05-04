#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers
 * @a: array to be compare
 * @n: size of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
