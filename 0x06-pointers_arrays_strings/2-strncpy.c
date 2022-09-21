#include "main.h"

/**
 * _strncpy - copies src to dest up to n characters
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of charaters to be copied
 * Return: the copies strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int len = 0;

	while (dest[index++])
		len++;

	index = 0;

	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}

	while (index < len)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
