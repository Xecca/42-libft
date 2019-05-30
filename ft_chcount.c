/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chcount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:01:04 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/29 22:16:17 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_chcount(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
		{
			s++;
			count++;
		}
	}
	return (count);
}
