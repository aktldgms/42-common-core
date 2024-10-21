#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	dst_len;
	size_t	src_len;

	dst_len = (size_t)ft_strlen(dst);
	src_len = (size_t)ft_strlen(src);
	counter = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[counter] != '\0' && (dst_len + counter) < (dstsize - 1))
	{
		dst[dst_len + counter] = src[counter];
		counter++;
	}
	dst[dst_len + counter] = '\0';
	return (src_len + dst_len);
}
