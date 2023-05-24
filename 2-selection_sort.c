#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * @array: array
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, k = 0;
	int n = 0;

	if (!array)
		return;

	while (i < size - 1)
	{
		n = array[i];
		j = i + 1;
		k = i;

		while (j < size)
		{
			if (n > array[j])
			{
				n = array[j];
				k = j;
			}
			j++;
		}
		if (array[k] != array[i])
		{
			array[k] = array[i];
			array[i] = n;
			print_array(array, size);
		}
		i++;
	}
}
