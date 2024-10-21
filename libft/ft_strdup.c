#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dups;

	dups = ft_calloc(ft_strlen(s) + 1, 1);
	if (dups)
	{
		ft_strlcpy(dups, s, ft_strlen(s) + 1);
		return (dups);
	}
	return (NULL);
}
