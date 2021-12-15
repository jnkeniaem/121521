/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:37:24 by jeekim            #+#    #+#             */
/*   Updated: 2021/12/15 17:52:06 by jeekim:je        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*node;

	if (lst == NULL || del == NULL)
		return ;
	cur = *lst;
	while (cur)
	{
		node = cur;
		ft_lstdelone(cur, del);
		cur = node->next;
	}
}
