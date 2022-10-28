#include "main.h"
/**
 * reverse_array - function to reverse an array
 * @a: array
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int w, e;

for (w = 0; (w < (n - 1) / 2); w++)
	{
	e = a[w];
	a[w] = a[n - 1 - w];
	a[n - 1 - w] = e;
	}
}
