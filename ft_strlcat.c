/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:14 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/22 02:08:18 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	idx;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	idx = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (idx < dstsize - dst_len - 1 && idx < src_len)
	{
		dst[dst_len + idx] = src[idx];
		idx ++;
	}
	dst[dst_len + idx] = '\0';
	return (dst_len + src_len);
}
