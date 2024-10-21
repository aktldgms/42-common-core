#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	if (n > 0 && !dest && !src)
		return (NULL);
	ptr_d = (unsigned char *)dest;
	ptr_s = (unsigned char *)src;
	while (n--)
	{
		*ptr_d = *ptr_s;
		ptr_d++;
		ptr_s++;
	}
	return (dest);
}
