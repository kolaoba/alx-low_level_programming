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

	while (m < 10)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar(m * n + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		m++;
	}
}
