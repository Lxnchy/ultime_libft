/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehubert <jehubert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:25:59 by jehubert          #+#    #+#             */
/*   Updated: 2022/12/06 15:50:06 by jehubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*l;

	if (!lst || !del)
		return ;
	l = *lst;
	while (l)
	{
		temp = l->next;
		ft_lstdelone(l, del);
		l = temp;
	}
	*lst = NULL;
}
