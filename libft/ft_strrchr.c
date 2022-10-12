/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:54 by azengin           #+#    #+#             */
/*   Updated: 2022/10/12 21:38:07 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *strrchr(const char *s, int c)
{
    size_t  i;
    char    a;

    a = (char)c;
    i = ft_strlen(s);
    while (s[i])
    {
        if (s[i] == a)
            return (s[i]);
        i--;
    }
    return (0);
}