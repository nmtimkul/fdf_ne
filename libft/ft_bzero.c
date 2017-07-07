/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 08:29:49 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:16:19 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		index;
	int		len;
	char	*temp;

	index = 0;
	len = (int)n;
	temp = (char*)s;
	if (len)
	{
		while (index < len)
		{
			temp[index] = '\0';
			index++;
		}
	}
}
