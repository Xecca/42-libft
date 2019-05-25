/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:51:16 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 18:55:26 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *str;

	str = (t_list*)malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	if (content == NULL)
	{
		str->content = NULL;
		str->content_size = 0;
	}
	else
	{
		str->content = ft_strldup(content, content_size);
		str->content_size = content_size;
	}
	str->next = NULL;
	return (str);
}
