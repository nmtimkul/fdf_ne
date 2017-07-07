/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:42:49 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:42:53 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s) - 1;
	i = 0;
	j = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	while (s[len] == '\t' || s[len] == '\n' || s[len] == ' ')
		len--;
	fresh = ft_strnew(len - i);
	while (i <= len)
		fresh[j++] = s[i++];
	return (fresh);
}
