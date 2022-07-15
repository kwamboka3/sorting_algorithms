#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: Pointer to the beginning of an array
 * @size: The size of the array
 *
 * Return: Sorts new array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t temp;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}

		}
	}
}
