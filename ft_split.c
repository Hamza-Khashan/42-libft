/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhashan <hkhashan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:12:45 by hkhashan          #+#    #+#             */
/*   Updated: 2026/09/28 13:22:50 by hkhashan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_allocated_words(char **result, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*allocate_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;
	size_t	k;
	char	*word;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	k = 0;
	while (k < len)
	{
		word[k] = s[start + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = allocate_word(s, c, &i);
			if (!result[j])
				return (free_allocated_words(result, j), NULL);
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
