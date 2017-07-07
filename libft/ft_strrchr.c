/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:41:22 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:41:28 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*buf;
	int		i;

	i = ft_strlen(s);
	buf = (char*)s + i;
	while (i >= 0)
	{
		if (*buf == (unsigned char)c)
			return (buf);
		else
		{
			i--;
			buf--;
		}
	}
	return (NULL);
}
