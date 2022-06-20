#include "main.h"

/**
 * memset - program fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: character to fill the memory area with.
 * @n: number of bytes to be filled.
 *
 * Return: pointer to the filled memory area @s.
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int index;
	unsigned char *mem = s, value = c;

	for (index = 0; index < n; index++)
		mem[index] = value;

	return (mem);
}
