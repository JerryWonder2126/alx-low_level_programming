#include "main.h"

/**
 * _strchr - locates the first occurence of c in s
 *
 * @s: string to be searched
 * @c: string to be searched for
 * Return: refrence to the char if found else null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != '\0')
	{
		if (s[i] == c)
			return &s[i];
		i++;
	}

	return ('\0');
}

