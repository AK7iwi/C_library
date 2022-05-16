/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:04:31 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/16 06:02:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *dest;
   
    dest = malloc(sizeof (char) * (len + 1));
    if (!dest)
        return(NULL);
    /*
    if (len <= start)
        return(NULL);
    while (len >= start)
    {
        dest[len - 1] = s[len + start - 2];
        len--;
    }
    */
    return(dest);
}





