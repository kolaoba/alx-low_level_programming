#include "main.h"
#include <stdio.h>
/**
 * print_array - program prints n elemetns of an array
 * @a: array to be printed
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
	}

	printf("\n");
}
