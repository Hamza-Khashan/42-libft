/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhashan <hkhashan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 12:03:41 by hkhashan          #+#    #+#             */
/*   Updated: 2026/09/27 12:03:43 by hkhashan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
