#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any os a set of bytes
 * @s: a string
 * @accept - set og bytes to be searched for
 * Return: a pointer to the matched byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);

		s++;
	}

	return (NULL);
}
