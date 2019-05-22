/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:35:59 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/21 21:38:54 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				i;

	if (b != NULL)
	{
		str = (unsigned char*)b;
		i = 0;
		while (len > i)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
}
