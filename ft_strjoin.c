/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhashan <hkhashan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:17:41 by hkhashan          #+#    #+#             */
/*   Updated: 2026/09/28 11:17:42 by hkhashan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);

	size_t len1 = ft_strlen(s1);
	size_t len2 = ft_strlen(s2);
	char *result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);

	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);

	return (result);
}