/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:02:33 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/18 05:25:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isalnum(int c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && !(c >= '0' && c <= '9'))
			return(0);
	return(8);
}

/*
int main()
{
	printf("%d",ft_isalnum(0));
	printf("%d",ft_isalnum(31));
	printf("%d",ft_isalnum(37));
    printf("%d",ft_isalnum(54));
	printf("%d",ft_isalnum(83));
	printf("%d",ft_isalnum(103));
	printf("%d",ft_isalnum(125));
	printf("%d",ft_isalnum(140));
	printf("%d",ft_isalnum(-26));

	printf("%s","\n");

        printf("%d",isalnum(0));
	printf("%d",isalnum(31));
        printf("%d",isalnum(37));
	printf("%d",isalnum(54));
	printf("%d",isalnum(83));
	printf("%d",isalnum(103));
	printf("%d",isalnum(125));
	printf("%d",isalnum(140));
        printf("%d",isalnum(-26));
}

*/