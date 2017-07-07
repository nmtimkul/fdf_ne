/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:38:19 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:38:24 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fstr;

	i = 0;
	fstr = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	return (fstr);
}
