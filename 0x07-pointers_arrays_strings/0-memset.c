#include <stdio.h>
/**
 * _memset - fills memory area with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the poimter to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);		     
}
