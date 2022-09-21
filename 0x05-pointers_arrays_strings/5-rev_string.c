#include "main.h"

/**
 * rev_string - reverse the order of letters in a string
 *
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	while (s[index++])
		len++;

	index = len - 1;
	while (index >= len / 2)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
		index--;
	}
}
