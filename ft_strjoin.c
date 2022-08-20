/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:08 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:15:20 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*write_in_new_str(char const *s1, char const *s2, char *answer)
{
	size_t	idx0;
	size_t	idx1;

	idx0 = 0;
	idx1 = 0;
	while (idx0 < ft_strlen(s1))
	{
		answer[idx0] = s1[idx0];
		idx0 ++;
	}
	while (idx1 < ft_strlen(s2))
	{
		answer[idx0 + idx1] = s2[idx1];
		idx1 ++;
	}
	answer[idx0 + idx1] = '\0';
	return (answer);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	idx;
	char	*answer;

	idx = 0;
	answer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (answer == NULL)
		return (NULL);
	return (write_in_new_str(s1, s2, answer));
}
