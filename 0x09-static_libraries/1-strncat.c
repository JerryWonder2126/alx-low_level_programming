#include "main.h"

/**
 * _strncat - concantenates src to dest up to n characters
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of charaters to be copied
 * Return: the concantenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;
	int src_len = 0;

	while (dest[index++])
		dest_len++;

	index = 0;

	while (src[index++])
		src_len++;

	index = 0;

	while (src[index] && index < n)
	{
		dest[dest_len++] = src[index];
		index++;
	}

	for (; index < src_len; index++)
	{
		dest[dest_len++] = '\0';
	}

	return (dest);
}
