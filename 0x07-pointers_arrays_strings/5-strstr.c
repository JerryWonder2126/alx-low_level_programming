#include "main.h"

/**
 * _strstr - returns the first occurence of needle in haystack
 *
 * @haystack: string to be checked
 * @needle: the substring
 * Return: needle
 */
char * _strstr(char *haystack, char *needle)
{
	int i = 0;
	char **p;

	while (*haystack)
	{
		p = &haystack;

		for (i = 0; needle[i]; i++)
		{
			if (**p == '\0' || **p != needle[i])
				break;
			else if (needle[i + 1] == '\0')
				return (haystack);
			p++;
		}

		haystack++;
	}

	return ('\0');
}
