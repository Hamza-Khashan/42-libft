/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhashan <hkhashan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:09:37 by hkhashan          #+#    #+#             */
/*   Updated: 2026/09/28 11:15:34 by hkhashan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
