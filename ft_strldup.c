/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 19:13:53 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 19:13:59 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strldup(void const *s, size_t l)
{
	void	*result;
	size_t	i;

	result = malloc(l);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (l--)
	{
		((char*)result)[i] = ((char*)s)[i];
		i++;
	}
	return (result);
}
