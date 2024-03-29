#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = 0, low = 0;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	high = size - 1;
	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));

	while (value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}

		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
