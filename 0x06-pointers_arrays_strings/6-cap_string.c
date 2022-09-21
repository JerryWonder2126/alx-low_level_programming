#include "main.h"

/**
 * cap_string - capitalize all letters after custom word seperators
 *
 * @str: the string to be converted
 * Return: converted string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (is_seperator(str[index]))
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] -= 32;

		index++;
	}

	return (str);
}

/**
 * is_seperator - checks if a character is a word seperator
 *
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */
int is_seperator(char c)
{
	int i = 0;
	int res = 0;
	char sep[] = " \t\n,;.!?;\"(){}";

	while (sep[i])
	{
		if (sep[i] == c)
		{
			res = 1;
			break;
		}
		i++;
	}

	return (res);
}
