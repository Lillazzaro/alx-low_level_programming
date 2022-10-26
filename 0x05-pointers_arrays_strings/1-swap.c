#include "main.h"

/**
 * swap_int- Swaps the value of two integers
 * @a: first argument to be swapped
 * @b: second argument to be swapped
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
