#include "main.h"

/**
 * string_toupper - converts all lowercase characters to uppercase in a string
 *
 * @str: the string to be converted
 * Return: converted string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
