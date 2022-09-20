#include "main.h"

/**
 * puts_half - print the second half string
 *
 * @str: string to work on
 *
 * Return: 0.
 */

void puts_half(char *str)
{
	int i, l;

	i = 0;
	while
		(str[i] != '\0')
		{
			i++;
		}
	l = (i + 1) / 2;

	if (1 % 2 == 0)
	{
		for (i = l; str[i]; i++)
		{
			_putchar(str[i]);

		}

	}

	_putchar('\n');

}
