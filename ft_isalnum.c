#include <unistd.h>

int ft_isalnum(unsigned char c) 
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
