/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:24:06 by azengin           #+#    #+#             */
/*   Updated: 2023/01/07 21:04:57 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int	main()
{
	char *str;
	int	n;
	int fd;

	n = 3333;
	str = (char *)malloc(sizeof(char) * 4);
	fd = open("test.txt", O_RDWR | O_CREAT, 777);
	ft_putnbr_fd(n, fd);
	fd = write(1, "4444", 4);
	close(fd);
	fd = open("test.txt", O_RDONLY, 777);
	read(fd, str, 2);
	printf("%s", str);

}