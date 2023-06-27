#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int longi = 0, i;

	while (longi >= 0)
	{
		if (str[longi] == '\0')
			break;
		longi++;
	}

	if (longi % 2 == 1)
		i = longi / 2;
	else
		i = (longi - 1) / 2;

	for (i++; i < longi; i++)
		_putchar(str[i]);
	_putchar('\n');
}
