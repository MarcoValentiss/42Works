/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:37 by azengin           #+#    #+#             */
/*   Updated: 2022/10/13 18:42:47 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *s;
    
    s = b;
    while (len != '0')
    {
        *s++ = (unsigned char)c;
    }
    return (b);
}