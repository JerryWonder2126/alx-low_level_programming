#include "main.h"

/**
 * *_strcpy - copies string from source to destination
 *
 * @dest: the destination where string is copied to
 * @src: string to be copied
 * Return: string to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do
		dest[i] = src[i];
	while (dest[i++]);

	return (dest);
}
