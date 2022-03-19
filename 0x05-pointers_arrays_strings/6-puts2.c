#include "main.h"
/**
 * puts2 - prints every other character
 * @str: type of character
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}

	_putchar('\n');
}
