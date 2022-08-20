/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:13 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:18:06 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*container;
	t_list	*answer;

	if (lst == NULL)
		return (NULL);
	answer = NULL;
	while (lst->next != NULL)
	{
		container = ft_lstnew(f(lst->content));
		if (container == NULL)
		{
			ft_lstclear(&answer, del);
			return (NULL);
		}
		ft_lstadd_back(&answer, container);
		lst = lst->next;
	}
	ft_lstadd_back(&answer, ft_lstnew(f(lst->content)));
	return (answer);
}
