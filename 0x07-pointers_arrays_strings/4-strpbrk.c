#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string being searched
 * Return: a pointer to the byte in s or NULL if we have no match
 */
char *_strpbrk (char *s, char *accept)
{
	int i, j;
	char *k;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j); j++)
                {
                        if (*(s + i) == *(accept + j))
                                return (s + i);
                }
	}
	return ('\0');
}
