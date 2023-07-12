#include <stdio.h>
#include "search_algos.h"
#include <stddef.h>

/**
 * interpolation_search - Searches for a value in a sorted array using interpolation search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if value is not present in array or if array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;
	double ratio;

	if (array == NULL)
		return -1;

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		ratio = (double)(high - low) / (array[high] - array[low]);
		pos = low + (size_t)(ratio * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", (unsigned long)pos, array[pos]);

		if (array[pos] == value)
			return pos;

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", (unsigned long)high);
	return -1;
}
