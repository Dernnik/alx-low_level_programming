#include "main.h"

/**
 * *_strcpy - The description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to the pointer `src` to
 * the buffer pointed to a `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
