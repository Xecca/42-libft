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
	size_t	space_counter;
	size_t	i;

	space_counter = 0;
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
	{
		space_counter++;
		i++;
	}
	while (s[i] != '\0')
		i++;
	if (space_counter != i)
		i--;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
	{
		space_counter++;
		i--;
	}
	return (ft_strlen(s) - space_counter);
}
