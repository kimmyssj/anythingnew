/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:03:28 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:03:30 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			idx0;
	unsigned char	*s1;

	idx0 = 0;
	s1 = (unsigned char *)s;
	if (n == 0)
		return ;
	while (idx0 < n)
	{
		s1[idx0] = 0;
		idx0 ++;
	}
}
