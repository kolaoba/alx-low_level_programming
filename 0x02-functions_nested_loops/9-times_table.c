#include "main.h"
/**
 * times_table - program prints out the nine times table
 *
 * Return: nine times table
 */
void times_table(void)
{
	int m = 0;
	int n;
	int product;

	while (m < 10)
	{
		_putchar('0');

		for (n = 1; n < 10; n++)
		{
			_putchar(',');
			_putchar(' ');

			product = m * n;

			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
		}
		_putchar('\n');
		m++;
	}
}
