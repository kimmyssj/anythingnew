/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:30 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:16:23 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*b1;

	b1 = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		*(b1 + idx) = (unsigned char)c;
		idx ++;
	}
	return (b1);
}
