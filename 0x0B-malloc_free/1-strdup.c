#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated
 * Return: pointer to the newly created address
 */
char *_strdup(char *str)
{
	char *mem;
	int i;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	mem = malloc(sizeof(char) * (length + 1));

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		mem[i] = str[i];

	mem[length] = '\0';

	return (mem);
}
