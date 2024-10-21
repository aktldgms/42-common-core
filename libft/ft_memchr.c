#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			counter;

	ptr = (unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		counter++;
	}
	return (NULL);
}
