#include "main.h"
/**
 * times_table - program prints out the nine times table
 *
 * Return: nine times table
 */
void times_table(void)
{
	int m;
	int n;

	while (m = 0)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar((m * n) + '0');
			_putchar(',');
		}
		_putchar('\n');
		m++;
	}
}
