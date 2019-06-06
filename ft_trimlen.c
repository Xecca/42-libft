/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trimlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:30:50 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/23 17:31:11 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_trimlen(const char *s)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			count++;
			i++;
		}
		i++;
	}
	if (count != i)
		i--;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
	{
		count++;
		i--;
	}
	return (ft_strlen(s) - count);
}
