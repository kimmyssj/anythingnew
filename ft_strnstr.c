/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:33 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:05:36 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start_checking(const char *haystack, const char *needle, int len_idx)
{
	int	idx;

	idx = 0;
	while (needle[idx] && haystack[idx] == needle[idx] && idx < len_idx)
		idx ++;
	if (needle[idx] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	flag;

	idx = 0;
	flag = 0;
	if (!*needle)
		return ((char *)haystack);
	while (idx < len && haystack[idx])
	{
		if (haystack[idx] == *needle)
			flag = start_checking(haystack + idx, needle, len - idx);
		if (flag == 1)
			return ((char *)haystack + idx);
		idx ++;
	}
	return (0);
}
