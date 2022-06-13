#include "main.h"
#include <stdio.h>
/**
 * puts_half - program prints half of a string.
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int index = 0;
	int half_length;

	while (s[index++])
		length++;
	half_length = length / 2;

	while (*(s + half_length) != '\0')
	{
	s++;
	}
	printf("%s", s);

	printf("\n");	
}
