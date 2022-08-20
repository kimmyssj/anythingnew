/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:11 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:00:13 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tracker;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	tracker = lst->next;
	while (tracker != NULL)
	{
		if (tracker->next == NULL)
			return (tracker);
		else
			tracker = tracker->next;
	}
	return (0);
}
