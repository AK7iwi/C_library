/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_scantop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 04:38:57 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 04:42:33 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_scantop(t_list **a, int val)
{
	t_list	*tmp;
	int		pos;

	tmp = *a;
	pos = 1;
	while (tmp)
	{
		if (tmp->value < val)
			break ;
		tmp = tmp->next;
		pos++;
	}
	return (pos);
}
