/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:03:59 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:23:00 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_recursive_clear(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	if (lst->next != NULL)
		ft_recursive_clear(lst->next, del);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (del == NULL)
		return ;
	ft_recursive_clear(*lst, del);
	*lst = NULL;
}
