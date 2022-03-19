#include <stdio.h>
#include "main.h"
/**
 * print_array - print the content of the array
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
