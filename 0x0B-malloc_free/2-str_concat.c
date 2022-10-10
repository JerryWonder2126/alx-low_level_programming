#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 *
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int i;
	int length = 0;

	length = _strlen(s1) + _strlen(s2);

	mem = malloc(sizeof(char) * (length + 1));

	if (mem == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		mem[i] = s1[i];

        while (*s2)
		mem[i++] = *s2++;

	mem[length] = '\0';

	return (mem);
}

/**
 * _strlen - calculates string length
 *
 * @s: the string to be calculated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
