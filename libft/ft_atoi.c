/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:15:50 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:15:57 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(unsigned char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
			|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int	i;
	int	min;
	int	total;

	i = 0;
	min = 1;
	total = 0;
	while ((unsigned char)ft_isspace(*str))
		str++;
	if (str[0] == '-')
	{
		min = -1;
		str++;
	}
	while (ft_isdigit(str[i]))
		total = total * 10 + (str[i++] - '0');
	return (min * total);
}
