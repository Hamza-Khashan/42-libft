#include "libft.h"
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char *s1 = "                       Hello   World koko    Hi             f";
	char c = ' ';
	char **result = ft_split(s1, c);
	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	else
	{
		for (int i = 0; result[i] != NULL; i++)
		{
			printf("result[%d]: '%s'\n", i, result[i]);
			free(result[i]);
		}
		free(result);
	}

	return (0);
}