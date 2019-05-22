/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 11:59:19 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 11:17:51 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*strncpy(char *dest, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
