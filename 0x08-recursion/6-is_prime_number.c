#include "main.h"

/**
 * is_prime_number - to chek if a number is prime number
 * @n: number to be checked
 * @i: 
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else
	{
	
	if (n % i == 0)
		return (0);
	else
		return (is_prime_number(n, i -1));
	}
}
