/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_minpos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:18:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/09 19:28:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_minpos(t_list *tmp)
{
	int		min;
	int		i;

	min = ft_lstmin(tmp);
	i = 1;
	while (tmp)
	{
		if (tmp->value == min)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}
