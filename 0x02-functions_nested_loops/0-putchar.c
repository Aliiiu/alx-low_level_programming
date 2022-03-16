#include "main.h"
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	char *wrd = "_putchar";
	
	while (*wrd)
	{
		_putchar(*wrd);
		wrd++;
	}
	_putchar('\n');

	return(0);
}
