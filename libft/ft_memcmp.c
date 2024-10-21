#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;
	size_t			counter;

	counter = 0;
	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	while (counter < n)
	{
		if (*ptrs1 != *ptrs2)
			return (*ptrs1 - *ptrs2);
		counter++;
		ptrs1++;
		ptrs2++;
	}
	return (0);
}
