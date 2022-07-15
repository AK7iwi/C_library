/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoua.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:32:39 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/15 20:50:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long long nb)
{
	long long	n;
	int			count;

	n = nb;
	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

unsigned char	*ft_itoua(int nb)
{
	unsigned char		*dest;
	long long	n;
	int			size;

	n = nb;
	size = ft_len(n);
	dest = malloc(sizeof(unsigned char) * (size + 1));
	if (!dest)
		return (NULL);
	dest[size--] = '\0';
	if (n == 0)
		dest[size] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		dest[size] = ((n % 10) + '0');
		n /= 10;
		size--;
	}
	return (dest);
}
