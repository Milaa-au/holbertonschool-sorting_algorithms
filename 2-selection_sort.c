#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: pointer to the array of integers to sort
 * @size: size of the array
 *
 * Description: This function implements the Selection sort algorithm.
 * It iterates through the array, finding the smallest element in the
 * unsorted portion and swapping it with the element at the current
 * position. If a swap occurs, the array should be printed (only when
 * required by the project specifications). The array is sorted in place.
 */

void selection_sort(int *array, size_t size)
{
	size_t index = 0, j;
	size_t min_index = index;
	int temp;

	if (array == NULL)
	{
		return;
	}
	for (index = 0; index < size - 1; index++)
	{
		min_index = index;

		for (j = index + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != index)
		{
			temp = array[index];
			array[index] = array[min_index];
			array[min_index] = temp;
		}
		print_array(array, size);
	}

}
