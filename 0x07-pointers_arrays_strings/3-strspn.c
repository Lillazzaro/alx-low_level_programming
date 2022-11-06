#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int h = 0, f, g;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] != 32)
		{
			for (g = 0; accept[g] != '\0'; g++)
			{
				if (s[f] == accept[g])
					h++;
			}
		}
		else
			return (h);
	}
		return (h);

}
