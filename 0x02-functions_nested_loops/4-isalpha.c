#include "main.h"
/**
 * _isalpha - check if the charcter is an alphabet or not
 * @c: the charcter to be checked
 *
 * Return: 1 if true or 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
