#include "main.h"

/**
 * _memcpy - copies a memery area
 *
 * @dest: memory are to be coppied to
 * @src: mamory area to be copped from
 * @n: number of bytes to be copied
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
