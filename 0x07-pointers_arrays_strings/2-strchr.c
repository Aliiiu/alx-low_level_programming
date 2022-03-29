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
	
	for (i = 0; *(s + 1) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	return ('\0');
}
