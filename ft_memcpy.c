/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:25 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/22 00:49:24 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		idx;
	char		*str;
	const char	*str1;

	str = (char *)dst;
	str1 = (const char *)src;
	idx = 0;
	while (idx < n)
	{
		str[idx] = str1[idx];
		idx ++;
	}
	return (dst);
}
