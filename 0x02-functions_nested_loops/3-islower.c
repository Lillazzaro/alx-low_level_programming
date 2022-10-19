#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase char
 * @c: char to be checked
 * Return: 1 if char is lowercase, otherwise return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
