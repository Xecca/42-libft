/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:52:27 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 18:54:11 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *node;
	t_list *t;

	if (!lst)
		return (NULL);
	node = f(lst);
	t = node;
	while (lst->next)
	{
		lst = lst->next;
		if (!(node->next = f(lst)))
		{
			free(node->next);
			return (NULL);
		}
		node = node->next;
	}
	return (t);
}
