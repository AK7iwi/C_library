/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 02:48:46 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/18 07:08:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
    char *s2;
    size_t i;
    size_t j;
    size_t k;
    
    
    s2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) +1 ));
    i = 0;
    k = 0;
    if (!s2)
        return(NULL);      
    while(s1[i]) 
    {
        j = 0;
        while(set[j])
        {
            if(s1[i] != set[j])
                j++;            
        }
        i++;
        
    } 
    while(s1[i] && s1[i] != set[j])
    {
        s2[k] = s1[i];
        k++;
        i++;
    }
    s2[k] = '\0';
    return(s2 +`);
    
}