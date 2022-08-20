/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:04:16 by seungjki          #+#    #+#             */
/*   Updated: 2022/07/21 16:18:32 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*answer;

	answer = (void *)malloc(sizeof(void *) * 2);
	if (!answer)
		return (NULL);
	answer->content = content;
	answer->next = NULL;
	return (answer);
}
