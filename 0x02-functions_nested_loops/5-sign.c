#include "main.h"
/**
 * print_sign - check a number is positive or negative or zero
 * @n: the number to be checked
 *
 * Return: 1 if +ve or 0 if 0 or -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
