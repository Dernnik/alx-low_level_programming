#include "main.h"

/**
 * _strncpy - to copies a string up to n
 * @dest: Destination of a pointer to the string
 * @src: Source of a pointer to the string to copy
 * @n: Number of the bytes to copy.
 * Return: Pointer to the main destination of a string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
