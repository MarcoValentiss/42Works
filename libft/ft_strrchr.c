/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:54 by azengin           #+#    #+#             */
/*   Updated: 2022/10/22 18:46:58 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int  i;
   
    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i--;
    }
    return (0);
}