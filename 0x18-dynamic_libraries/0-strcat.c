#include "main.h"

/**
 * _strcat - concantenates src to dest
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * Return: the concantenated strings
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	index = 0;

	while (src[index])
	{
		dest[dest_len + index] = src[index];
		index++;
	}

	return (dest);
}
