/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:41 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/28 18:43:29 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_point;
	size_t	end_point;
	char	*answer;

	start_point = 0;
	end_point = ft_strlen(s1);
	while (s1[start_point] && ft_strchr(set, s1[start_point]))
		start_point ++;
	while (end_point > 0 && ft_strchr(set, s1[end_point - 1]))
		end_point --;
	if (start_point >= end_point)
		return (ft_strdup(""));
	answer = ft_substr(s1, start_point, end_point - start_point);
	return (answer);
}
