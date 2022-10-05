#ifndef SEARCH_ALGOS_
#define SEARCH_ALGOS_
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t begin, size_t end);

#endif