#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: character to be checked 
 *
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		
		return (1);

	else
		return (0);
}
