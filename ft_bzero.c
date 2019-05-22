/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:36:15 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/21 21:21:27 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	if (s != NULL)
	{
		str = (unsigned char*)s;
		i = 0;
		while (i < n)
		{
			str[i] = '\0';
			i++;
		}
	}
}
