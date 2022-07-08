#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 2 || i == 4)
        {
            continue;
        }
        else
        {
            _putchar(i + '0');
        }
    }

    _putchar('\n');
}
