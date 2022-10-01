#include "main.h"

/**
 * _strspn - returns the number of bytes in s that contains only bytes in accept
 *
 * @s: string to be checked
 * @accept: bytes being checked against
 * Return: number of bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
