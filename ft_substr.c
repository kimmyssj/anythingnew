/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:44 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/23 19:30:31 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*answer;
	size_t	idx;

	idx = 0;
	if (ft_strlen(s) < start)
	{
		answer = (char *)malloc(sizeof(char));
		answer[0] = '\0';
		return (answer);
	}
	answer = (char *)malloc(len * sizeof(char) + 1);
	if (answer == NULL)
		return (NULL);
	while (idx < len && s[start + idx])
	{
		answer[idx] = s[start + idx];
		idx ++;
	}
	answer[idx] = '\0';
	return (answer);
}
