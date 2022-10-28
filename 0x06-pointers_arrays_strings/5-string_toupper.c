#include "main.h"
/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: string
 * Return: char
 */
char *string_toupper(char *s)
{
	int a;

a = 0;
	while (*(s + a))
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
			*(s + a) -= 'a' - 'A';
		a++;
	}
	return (s);
}
