/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhashan <hkhashan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:16:49 by hkhashan          #+#    #+#             */
/*   Updated: 2026/09/30 17:19:05 by hkhashan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int count;

    count = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}
