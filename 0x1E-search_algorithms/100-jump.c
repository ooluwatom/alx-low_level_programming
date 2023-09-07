#include "search_algos.h"

int recurse_helper(int *array, size_t size, size_t step, size_t idx, int val);
int subrecurse_help(int *array, size_t size, size_t end, size_t idx, int val);

/**
 * jump_search - to perform jump search
 * @array: the pointer to first elem of array
 * @size: number of elems in array
 * @value: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, sqrt(size), 0, value));
}

/**
 * recurse_helper - the recursive implement of jump search
 * @array: the array to search
 * @size: the size of array
 * @step: jump increment
 * @idx: current index
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int recurse_helper(int *array, size_t size, size_t step, size_t idx, int val)
{
	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	/* if value is greater, jump forward */
	if (((idx + step < size) && array[idx + step] < val))
		return (recurse_helper(array, size, step, idx + step, val));

	/* recurse subarray */
	printf("Value found between indexes [%lu] and [%lu]\n", idx, (idx + step));
	return (subrecurse_help(array, size, idx + step, idx, val));
}

/**
 * subrecurse_help - recursive implement for recursive implement
 * @array: array to search
 * @size: size of array
 * @end: end of subarray
 * @idx: current index
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
int subrecurse_help(int *array, size_t size, size_t end, size_t idx, int val)
{
	if (idx >= size || idx > end || array[idx] > val)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

	if (array[idx] == val)
		return (idx);
	else
		return (subrecurse_help(array, size, end, idx + 1, val));
}
