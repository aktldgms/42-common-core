#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;

	counter = 0;
	while (counter < len)
	{
		((unsigned char *)b)[counter] = (unsigned char)c;
		counter++;
	}
	return (b);
}
