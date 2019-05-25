/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:51:48 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 18:47:30 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *swap;
	t_list *t;

	swap = *alst;
	t = *alst;
	while (t != NULL)
	{
		(*del)(swap->content, swap->content_size);
		swap = t->next;
		free(t);
		t = swap;
	}
	*alst = NULL;
}
