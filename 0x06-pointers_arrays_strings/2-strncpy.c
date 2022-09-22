#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: paramter 3
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
