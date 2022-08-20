/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:03:31 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:03:33 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	idx;

	idx = 0;
	result = (char *)malloc(size * count);
	if (result == 0)
		return (0);
	while (idx < size * count)
	{
		result[idx] = '\0';
		idx ++;
	}
	return (result);
}
