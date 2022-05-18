/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 02:48:46 by mfeldman          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/18 06:52:56 by mfeldman         ###   ########.fr       */
=======
/*   Updated: 2022/05/18 06:49:45 by mfeldman         ###   ########.fr       */
>>>>>>> 4c36a8f69d9aa2f9ab3ec91c791192af43093f9f
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
    return(s2);
<<<<<<< HEAD
    or
=======
    o
>>>>>>> 4c36a8f69d9aa2f9ab3ec91c791192af43093f9f
}