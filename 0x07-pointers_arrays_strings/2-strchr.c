#include <stdio.h>
/**
 * *_strchr checks for the first occurence of the 
 * character c in the string s
 * @s: string s
 * @c: char c
 * return: returns a pointer to the first occurence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	i = 0;
	while (*(s+i) != '\0')
	{
		if (*(s+i) == c)
			return((s+i));
		i++;
	}
	return ('\0');
}
