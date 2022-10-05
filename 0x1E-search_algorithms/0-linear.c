#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * linear search algorithm
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}