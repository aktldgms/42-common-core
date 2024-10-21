#include "libft.h"

static int	ft_basamak_hesapla(int n)
{
	int	basamak;

	if (n <= 0)
		basamak = 1;
	else
		basamak = 0;
	while (n != 0)
	{
		n /= 10;
		basamak++;
	}
	return (basamak);
}

char	*ft_itoa(int n)
{
	int		basamak;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	basamak = ft_basamak_hesapla(n);
	result = (char *)malloc(basamak + 1);
	if (!result)
		return (NULL);
	result[basamak] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		result[--basamak] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}
