#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = (char *)s;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (ptr[len] == (char)c)
			return (&ptr[len]);
		len--;
	}
	return (0);
}
