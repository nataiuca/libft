#include <stdio.h>

int isalnum(unsigned char c) 
{
	if (isalpha(c) || isdigit(c))
		return (1);
	else
		return (0);
}
