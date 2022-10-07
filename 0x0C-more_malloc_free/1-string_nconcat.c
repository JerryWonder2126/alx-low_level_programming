char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int size, i;

	size = lenOfArray(s1) + n;

	s = malloc(size);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (*s1)
	{
		s[i++] = *s1;
		s1++;
	}


	for (;i <= size; i++)
	{
		if (i != size)
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
