/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:30:42 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:30:48 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*buf;
	int		i;
	int		len;

	buf = (char*)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (*buf == (unsigned char)c)
			return (buf);
		else
		{
			i++;
			buf++;
		}
	}
	return (NULL);
}
