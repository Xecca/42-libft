/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:48:56 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 19:17:55 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		wdcount;
	char	**main_str;

	if (s == NULL)
		return (NULL);
	wdcount = ft_wdcount(s, c);
	main_str = (char**)malloc(sizeof(char*) * (wdcount + 1));
	if (main_str == NULL)
		return (NULL);
	main_str = ft_sfill(s, main_str, wdcount, c);
	return (main_str);
}
