#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lil_len;

	if (!*little)
		return ((char *)big);
	lil_len = 0;
	while (little[lil_len] != '\0')
		lil_len++;
	i = 0;
	while (big[i] != '\0' && i + lil_len <= len)
	{
		if (big[i] == little[0]
			&& ft_strncmp(&big[i], little, lil_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
