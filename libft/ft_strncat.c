/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:38:38 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:38:43 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	char		*s1_t;
	const char	*s2_t;

	if (n != 0)
	{
		i = 0;
		s1_t = s1;
		s2_t = s2;
		while (*s1_t != '\0')
			s1_t++;
		while (i < n)
		{
			*s1_t = *s2_t;
			s1_t++;
			s2_t++;
			i++;
		}
		*s1_t = '\0';
	}
	return (s1);
}
