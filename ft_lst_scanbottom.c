/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_scanbottom.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 04:41:11 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 04:43:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_scanbottom(t_list **a, int val)
{
	int		*arr;
	int		pos;
	int		j;

	j = ft_lstsize(*a) - 1 ;
	arr = array(a);
	while (arr[j])
	{
		if (arr[j] < val)
			break ;
		j--;
	}
	pos = j;
	free(arr);
	return (ft_lstsize(*a) - pos);
}
