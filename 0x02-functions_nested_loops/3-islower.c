#include "main.h"

/**
 * _islower - checks if c is lowercase

 * @c: the character to be checked
 * Return: 1 if lowercase, else 0
 */
int _islower(int c)
{
  if ('a' <= c && c <= 'z')
    {
      return (1);
    }
  return (0);
}
