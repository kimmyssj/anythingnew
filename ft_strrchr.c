/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:05:37 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/20 02:05:39 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		idx;

	idx = 0;
	s1 = 0;
	if (c == 0)
	{
		while (s[idx])
			idx ++;
		return ((char *)s + idx);
	}
	while (s[idx])
	{
		if (s[idx] == c)
			s1 = (char *)s + idx;
		idx ++;
	}
	return (s1);
}
