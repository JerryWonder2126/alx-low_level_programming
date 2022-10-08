#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int length, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = lenOfArray(s1) + n + 1;

	s = malloc(sizeof(char) * length);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (*s1)
	{
		s[i++] = *s1;
		s1++;
	}


	for (; i <= length; i++)
	{
		if (i != length)
		{
			s[i] = *s2;
			s2++;
		}
		else
			s[i] = '\0';
	}

	return (s);
}

/**
 * lenOfArray - returns the length of an array
 *
 * @array: the array to be measured
 * Return: the length of the array
 */
int lenOfArray(char *array)
{
	int index = 0;
	int length = 0;

	while (array[index++])
		length++;

	return (length);
}
