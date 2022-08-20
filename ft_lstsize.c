/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:18 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:20:11 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		idx;
	t_list	*container;

	if (lst == 0)
		return (0);
		container = lst;
	idx = 1;
	while (container->next)
	{
		idx ++;
		container = container->next;
	}
	return (idx);
}
