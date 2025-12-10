#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	size_t i, n = size;
	int temp;
	int swapzr;

	if (array == NULL || size < 2)
	return;

	do
	{
		swapzr = 0;

		for (i = 0; i < n - 1; i++)

		{
			if (array[i] > array [i + 1])
	
			{
				temp = array [i];
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