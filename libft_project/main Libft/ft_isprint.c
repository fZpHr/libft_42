
#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (16384);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main()
{	
	printf("sans: %d\n", ft_isprint(126));
	printf("avec: %d\n", isprint(126));
}
