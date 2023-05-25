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
 * partition - Partitions an array of integers using the last element as pivot
 * @array: The array to be partitioned.
 * @low: The starting index of the range to be partitioned.
 * @high: The ending index of the range to be partitioned.
 * @size: The size of the array.
 *
 * Return: The final index of the pivot after partitioning.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j;
	int i =  low - 1;

	for (j = low; j <= high ; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
 * quick_recursion - Performs the recursive steps of the quicksort algorithm
 * @array: The array to be sorted.
 * @low: The starting index of the range to be sorted.
 * @high: The ending index of the range to be sorted.
 * @size: The size of the array.
 */
void quick_recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_recursion(array, low, pivot - 1, size);
		quick_recursion(array, pivot + 1, high, size);

	}
}

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	quick_recursion(array, 0, size - 1, size);
}
