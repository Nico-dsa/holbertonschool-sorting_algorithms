#include "sort.h"

/**
 * swap - function swap
 * @xp: imput
 * @yp: imput
 */
void swap(int *xp, int *yp)
{
	int tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t step;
	size_t i;
	
	if (size < 2)
		return;

	for (step = 0; step < size - 1; step++)
	{
		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}

		}
	}
}
