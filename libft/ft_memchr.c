/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 09:47:05 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:19:58 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	index;
	char	*tmp;

	index = 0;
	tmp = (char*)s;
	while (index < n)
	{
		if (tmp[index] == (unsigned char)c)
			return (&tmp[index]);
		index++;
	}
	return (0);
}
