/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:35:39 by azengin           #+#    #+#             */
/*   Updated: 2022/10/15 18:14:55 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
size_t ft_strlen(const char *s);

#endif