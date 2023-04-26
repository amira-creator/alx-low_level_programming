#include <stdio.h>
/**
 * numLength - return the length of string
 * @num: operate  number
 * Return: number of digit
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - main block
 * Description: print the first 98 fibonacci numbers
 * starting with 1 and 2 followed by a new line
 * Return: 0
 */
int main(void)
{
	int count, i;
	unsigned long int f1 = 1, f2 = 2;
	unsigned long int sum, mx = 100000000, flo = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
		i = numLength(mx) - 1 - numLength(f1);

		while (flo > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = flo + f2o + (f1 + f2) / mx;
		f1 = f2;
		flo = f2o;
		f2 = sum;
		f2o = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
