#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a: pointer for variable a
 * @b: pointer for variable b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
