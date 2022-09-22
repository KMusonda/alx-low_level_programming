#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: character to be connected
 * @src: charater to be conected
 * Return: return a string
 */

char *_strcat(char *dest, char *src)
{
	int len 0, i;

	while (dest[len])
		len++

	for (i = 0; src[i] != '0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	return (dest);
}
