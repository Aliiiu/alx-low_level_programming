#include "main.h"


int main (void)
{
	char *wrd = "_putchar";
	while(*wrd)
	{
		_putchar(*wrd);
		wrd++;
	}
	_putchar('\n');
	return(0);
}
