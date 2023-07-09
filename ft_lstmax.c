/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:17:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/09 19:30:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstmax(t_list	*lst)
{
	int		max;
	t_list	*node;

	if (!lst)
		return (0);
	max = lst->value;
	node = lst;
	while (node != NULL)
	{
		if (node->value > max)
			max = node->value;
		node = node->next;
	}
	return (max);
}
