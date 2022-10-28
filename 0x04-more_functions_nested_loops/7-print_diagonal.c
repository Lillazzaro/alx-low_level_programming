#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 * Return: void
 */


void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_pyeastsutchar('\n');
	for (c = 0; c < n; c++)
	{
		for (d = 0; d < i; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
