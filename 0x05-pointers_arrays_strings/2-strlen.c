#include "main.h"
/**
 * int_strlen - program returns the length of a string
 * @s: input string
 *
 * Return: length of string s
 */
void int_strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
