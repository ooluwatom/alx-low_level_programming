#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 yhtough 9)
 * @c: character to be checked
 *
 * Return: return 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
