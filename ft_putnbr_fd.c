/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:41 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/22 01:44:50 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	conditions_check(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
		return (n);
	}
	return (n);
}	

void	ft_putnbr_fd(int n, int fd)
{
	long long	ten_num;
	char		for_write;

	ten_num = 1000000000;
	for_write = 0;
	n = conditions_check(n, fd);
	if (!n)
		return ;
	while (!(n / ten_num))
		ten_num = ten_num / 10;
	while (ten_num > 0)
	{
		for_write = n / ten_num + '0';
		write(fd, &for_write, 1);
		n = n % ten_num;
		ten_num = ten_num / 10;
	}
}
