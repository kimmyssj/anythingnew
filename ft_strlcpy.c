/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:20 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/22 02:08:30 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	src_len;

	src_len = 0;
	idx = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (idx < dstsize - 1 && idx < src_len)
	{
		dst[idx] = src[idx];
		idx ++;
	}
	dst[idx] = '\0';
	return (src_len);
}
