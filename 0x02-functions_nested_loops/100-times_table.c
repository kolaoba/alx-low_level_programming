#include "main.h"
/**
 * print_times_table - program prints out n times table
 * @n: starting number n
 *
 * Return: n times table
 */
void print_times_table(int n)
{
	int x;
	int y;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				product = x * y;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
