#include "main.h"

/**
 * _strpbrk - returns string s from first occurence of any character in accept
 *
 * @s: string to be checked
 * @accept: bytes being checked against
 * Return: char always
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
