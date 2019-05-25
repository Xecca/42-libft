/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:22:31 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/23 22:33:36 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	unsigned int i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
