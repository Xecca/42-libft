/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chcount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:01:04 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/23 18:01:09 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_chcount(char const *s, char c)
{
	int		char_counter;

	char_counter = 0;
	while (*s != '\0')
	{
		while (*s != c && *s != '\0')
		{
			char_counter++;
			s++;
			if (*s == c)
				return (char_counter);
		}
		if (*s != '\0')
			s++;
	}
	return (char_counter);
}
