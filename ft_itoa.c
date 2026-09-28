#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char *str;
	int len;
	int temp;

	if (n == 0)
		return (ft_strdup("0"));
	temp = n;
	len = ft_count_digits(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n != 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}