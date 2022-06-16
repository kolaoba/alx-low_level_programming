#include "main.h"
/**
 * leet - function encodes a string into 1337
 * @str: string to be changed
 *
 * Return: pointer to changed string
 */
char *leet(char *str)
{
	int index1 = 0;
	int index2;
	char leet[8] = {'O','L', '?', 'E', 'A', '?', '?', 'T'} 

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			    str[index1] -32 == leet[index2])
				str[index1] = index2 + '0';
		}

		index1++;
	}

	return (str);
}
