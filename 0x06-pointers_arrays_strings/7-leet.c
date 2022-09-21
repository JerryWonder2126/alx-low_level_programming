#include "main.h"

/**
 * leet - encodes a string substitute 4 for a A, 3 for e E, 0 for o O
 *        7 for t T and 1 for l L
 *
 * @str: the string to be converted
 * Return: converted string
 */
char *leet(char *str)
{
	int index = 0;

	while (str[index])
	{
		str[index] = encode(str[index]);

		index++;
	}

	return (str);
}

/**
 * encode - encodes a string
 *
 * @c: character to be checked
 * Return: char always
 */
char encode(char c)
{
	if (c == 'a' || c == 'A')
		return ('4');
	else if (c == 'e' || c == 'E')
		return ('3');
	else if (c == 'o' || c == 'O')
		return ('0');
	else if (c == 't' || c == 'T')
		return ('7');
	else
		return (c);
}
