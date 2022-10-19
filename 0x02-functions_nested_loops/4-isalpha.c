#include "main.h"

/**
 * _isalpha - checks for alphabetic char
 * @c: char to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
