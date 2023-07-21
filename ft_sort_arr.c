/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 04:54:14 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 05:52:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*sort_arr(int *arr, int len)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

// len = array longueur 