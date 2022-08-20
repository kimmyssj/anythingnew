/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:56 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:15:59 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*something_like_strchr(char const *s, char c)
{
	int	idx;

	idx = 0;
	if (c == 0)
	{
		while (s[idx])
			idx++;
		return ((char *)s + idx);
	}
	while (s[idx])
	{
		if (s[idx] == c)
			return ((char *)s + idx);
		idx++;
	}
	if (s[idx] == '\0')
		return ((char *)s + idx);
	return (0);
}

int	str_num_check(char const *s, char c)
{
	char	*start_p;
	char	*end_p;
	int		idx;

	start_p = (char *)s;
	idx = 0;
	while (start_p != s + ft_strlen(s))
	{
		end_p = something_like_strchr(start_p, c);
		if (*start_p != c)
			idx ++;
		if (*end_p != '\0')
			start_p = end_p + 1;
		else
			break ;
	}
	return (idx);
}

int	str_put_in(char **answer, char *start_p, int gap)
{
	int	idx;

	idx = 0;
	answer[0] = (char *)malloc(sizeof(char) * (gap + 1));
	if (answer[0] == NULL)
		return (0);
	while (idx < gap)
	{
		answer[0][idx] = start_p[idx];
		idx ++;
	}
	answer[0][idx] = '\0';
	return (1);
}

int	str_duplicate(char const *s, char c, char **answer)
{
	int		idx;
	int		str_idx;
	char	*start_p;

	idx = 0;
	str_idx = 0;
	start_p = NULL;
	while (s[idx])
	{
		if ((start_p == NULL && s[idx] != c && s[idx] != '\0'))
			start_p = (char *)s + idx;
		if ((s[idx + 1] == c && s[idx] != c)
			|| (s[idx + 1] == '\0' && s[idx] != c))
		{
			if (!str_put_in(answer + str_idx, start_p, s + idx - start_p + 1))
				return (str_idx);
			str_idx ++;
			start_p = NULL;
		}
		idx ++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**answer;
	int		str_num;
	int		for_free_idx;

	str_num = str_num_check(s, c);
	answer = (char **)malloc(sizeof(char *) * (str_num + 1));
	if (answer == NULL)
		return (NULL);
	for_free_idx = str_duplicate(s, c, answer);
	if (for_free_idx)
	{
		str_num = 0;
		while (0 < for_free_idx)
		{
			free(answer[for_free_idx - 1]);
			for_free_idx --;
		}
		free(answer);
		return (NULL);
	}
	answer[str_num] = NULL;
	return (answer);
}
