#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int longi = 0;

	while (longi >= 0)
	{
		if (str[longi] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (longi % 2 == 0)
			_putchar(str[longi]);
		longi++;
	}
}
