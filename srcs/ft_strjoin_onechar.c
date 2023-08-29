/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_onechar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:35:18 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/29 16:40:49 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_onechar(char *s1, char c)
{
	char	*dest;
	int		i;

	i = 0;
	if (s1 == NULL)
	{
		s1 = (malloc(1));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	dest = malloc(sizeof(char) * (ft_strlen(s1) + 2));
	if (!dest)
		return (free(s1), NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i++] = c;
	dest[i] = '\0';
	return (free(s1), dest);
}
