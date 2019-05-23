/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:40:38 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/21 18:40:39 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,\
		const void *restrict src, int c, size_t n)
{
	while (n)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		if (*(unsigned char*)src == (unsigned char)c)
			return (++dst);
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
