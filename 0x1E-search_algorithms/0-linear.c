#include "search_algos.h"

int recurse_helper(int *arr, size_t size, int val, size_t idx);

/**
 * linear_search - To search for value in an integer array
 * @array: a pointer to array of ints
 * @size: the size of array
 * @value: the value to locate
 *
 * Return: index of value; -1 if value not found
 */
int linear_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, value, 0));
}
/**
 * recurse_helper - the recursive implement of linear search
 * @arr: a pointer to array of ints
 * @size: the size of array
 * @val: a value to locate
 * @idx: current index
 *
 * Return: index of value; -1 if value not found
 */
int recurse_helper(int *arr, size_t size, int val, size_t idx)
{
	if (idx == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, arr[idx]);

	if (arr[idx] == val)
		return (idx);

	return (recurse_helper(arr, size, val, idx + 1));
}
