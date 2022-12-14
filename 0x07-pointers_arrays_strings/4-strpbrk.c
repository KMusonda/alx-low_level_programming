#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: character to search
 * @accept: character to search from
 * Return: Returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
