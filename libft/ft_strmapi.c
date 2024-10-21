#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;
	unsigned int	len;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = (unsigned int)ft_strlen(s);
	result = (char *)malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
