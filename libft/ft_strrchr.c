#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	s--;
	while (counter != 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		counter--;
	}
	return (NULL);
}
