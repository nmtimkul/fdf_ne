/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:41:48 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:41:52 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	parts;

	i = 0;
	parts = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			parts++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (parts);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**fresh;
	int		len;

	i = 0;
	while (*s && *s == c)
		s++;
	fresh = (char**)malloc(sizeof(char**) * word_count(s, c));
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (s[len] != c && s[len] != '\0')
			len++;
		fresh[i] = (char*)malloc(sizeof(char) * len);
		ft_strncpy(fresh[i], s, len);
		s = s + len;
		i++;
	}
	return (fresh);
}
