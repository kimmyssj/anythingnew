/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:23 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/22 02:50:01 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*s11;
	unsigned char	*s22;

	idx = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (idx < n)
	{
		if (s11[idx] != s22[idx])
			return (s11[idx] - s22[idx]);
		idx ++;
	}
	return (0);
}
