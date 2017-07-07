/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:40:51 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:41:03 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	stop;
	size_t	l_len;
	char	*buff;

	stop = 0;
	i = 0;
	l_len = ft_strlen(little);
	if (ft_strlen(big) >= ft_strlen(little))
	{
		buff = (char*)big;
		while (buff && stop < len)
		{
			while (buff[i] == little[i] && stop < len)
			{
				i++;
				stop++;
			}
			if (i == l_len)
				return (buff);
			buff++;
			stop++;
		}
	}
	return (NULL);
}
