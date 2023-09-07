#include "main.h"
/**
 * _memset - fill n bytes of the  memory
 *
 * @s: pointer to start of the  memory area
 * @b: constant byte to be fill with
 * @n: num bytes to be fill in
 *
 * Return: pointer to beginning of this memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
