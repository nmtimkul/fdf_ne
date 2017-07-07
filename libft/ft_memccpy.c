/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 09:45:26 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:19:36 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				index;
	int				len;
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;

	index = -1;
	src_tmp = (unsigned char*)src;
	dst_tmp = (unsigned char*)dst;
	len = (int)n;
	while (index++ < len)
		if (src_tmp[index] != (unsigned char)c)
			dst_tmp[index] = src_tmp[index];
		else
			return (&dst_tmp[index + 1]);
	return (NULL);
}
