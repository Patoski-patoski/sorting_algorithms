#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 *  using the Bubble sort algorithm
 *
 * @array: array of integers
 * @size: the length of the array
 *
 * Return: Nothing
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			flag = 0;
			if (array[j] > array[j + 1])
			{
				flag = 0;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
