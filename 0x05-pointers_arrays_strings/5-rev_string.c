#include "main.h"
/**
 * rev_string - program reverses a string.
 * @s: input string
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char swp;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
	swp = s[index];
	s[index] = s[length - index - 1];
	s[length - index - 1] = swp;
	}

	_putchar('\n');
}
