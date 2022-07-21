#include "main.h"

int finds_sqrtroot(int i, int root);
int _sqrt_recursion(int n);

/*
 * finds_sqrtroot - find square root of a given number
 * @i: number of square root to be found
 * @root: root to be tested
 * Return: if it does not have a natural square root,
 *  the function should return -1
 *  otherwise result
 */

int finds_sqrtroot(int i, int root)
{
	if ((root * root) == i)
		return (root);
	if (root == i  / 2)
		return (-1);


	return (finds_sqrtroot(i, root + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to be tested for natural square root
 * Return: -1 if no square root otherwiswe 1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (finds_sqrtroot(n, root));
}


