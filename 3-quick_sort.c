#include "sort.h"

/**
 * swap- a function to swap the values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return Nothing
 **/

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition- a function to demarcate an array into two partitions
 *
 * @low: the low partition
 * @high: the upper partition
 * @size: size of the array
 *
 * Return: partition
 **/

int partition(int arr[], int low, int high, size_t size)
{
	int j;
	int pivot = arr[high];
	int i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	print_array(arr, size);
	return (i + 1);
}

/**
 * quickSort- a function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: a pointer to integer
 * @low: lower boundary/partition 
 * @high: upper boundary/partition
 * @size: size of array
 *
 * Return: Nothing
 **/

void quickSort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
