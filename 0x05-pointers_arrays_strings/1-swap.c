#include "main.h"
/**
 * swap_int - program swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
