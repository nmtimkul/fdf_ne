/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:42:29 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:42:33 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*fresh;

	i = start;
	l = 0;
	fresh = ft_strnew(len + 1);
	while (s[i] != '\0' && l < len)
	{
		fresh[l] = s[i];
		i++;
		l++;
	}
	if (*fresh)
		fresh[l] = '\0';
	return (fresh);
}
