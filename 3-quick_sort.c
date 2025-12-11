#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void lamuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;
	int temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (i +1 != high)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

void quick_sort(int *array, size_t size)
{
	int pivot_index;
	
	if (low < high)
	{
		pivot_index = lamuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index -1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	if (array == NULL && size < 2)
	return;

	quick_sort_recursive(array, 0, size - 1, size);
}