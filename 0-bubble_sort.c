#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: pointer to the array to be sorted
 * @size: number of elements in the array
 *
 * Description: This function implements the Bubble sort algorithm.
 * It repeatedly steps through the array, compares adjacent elements,
 * and swaps them if they are in the wrong order. After each swap, the
 * array is printed. The process continues until a full pass is made
 * without performing any swap, meaning the array is sorted. The sorting
 * is performed in place and uses constant extra space.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n = size;
	int temp;
	int swapzr;

	if (array == NULL || size < 2)
	return;

	do {
		swapzr = 0;

		for (i = 0; i < n - 1; i++)

		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				print_array(array, size);

				swapzr = 1;
			}
		}
				n--;
	}
				while (swapzr);
}
