#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 * Return: a pointer to the destination memory area (dest).
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
	{
	*d++ = *s++;
	}

	return (dest);
}
