#include "main.h"
/**
 * print_alphabetx10 - program prints the alphabet in lower case 10 times
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		count++;
		_putchar('\n');
	}
}
